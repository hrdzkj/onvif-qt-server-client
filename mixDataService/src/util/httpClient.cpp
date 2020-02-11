#include <QDebug>
#include <QDateTime>
#include <QUrl>
#include <QUrlQuery>
#include <QVariant>

#include "httpClient.h"

#pragma execution_character_set("utf-8")

void HttpClient::test(){
    qDebug() << "url: ";
}

int HttpClient::httpRequest(httpRequest_t *httpRequest, httpReply_t *httpReply)
{
    QNetworkRequest request;
    QNetworkReply *reply;
    QVariant statusCode;

    requestTimer.stop();

    //准备报头
    qDebug() << "url: " << httpRequest->url;
    request.setUrl(httpRequest->url);
    for (int i = 0; i < httpRequest->header.size(); i++) {
        request.setRawHeader(httpRequest->header.at(i).key, httpRequest->header.at(i).value);
        qDebug() << "key " << httpRequest->header.at(i).key << " value " << httpRequest->header.at(i).value;
    }

    //设置退出状态
    quitStatue=0;

    //发起
    switch (httpRequest->method) {
    case HTTP_METHOD_GET:
        reply = manager.get(request);
        break;

    case HTTP_METHOD_POST:
        reply = manager.post(request, httpRequest->postData);
        break;

    default:
        qDebug() << "method invalid: " << httpRequest->method;
        return -1;
    }

    /*********设置请求退出后停止事件循环**********************/
    //完成时候退出事件循环--正常退出
    connect(reply, &QNetworkReply::finished, [=](){
        eventLoop.quit();
    });

    //超时退出事件循环
    connect(&requestTimer, &QTimer::timeout, [=](){
        quitStatue++;
        eventLoop.quit();
    });
    requestTimer.start(15 * 1000);

    //启动循环
    eventLoop.exec(); // block until finish

    //退出事件循环
    requestTimer.stop();
    if (quitStatue != 0 || reply==NULL){ //没有获得数据退出
        if (reply!=NULL){
            reply->abort();
            reply->deleteLater();
        }
        return -1;
    }

    //超时或fnish退出，且reply非空
    if (reply->error() == QNetworkReply::NoError) {

        httpReply->response = reply->readAll();//接收回复数据
        qDebug() << "httpReply->response==: " << httpReply->response;

        statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
        if (statusCode.isValid()) {
            httpReply->httpCode = statusCode.toInt();
            qDebug() << "recv finished: " << statusCode.toInt();
        }

        QList<QByteArray> list = reply->rawHeaderList();
        for (int i = 0; i < list.size(); i++) {
            httpHeader_t header;
            header.key = list.at(i);
            header.value = reply->rawHeader(list.at(i));
            httpReply->header.append(header);
        }

        httpReply->httpCode = statusCode.toInt();
        reply->abort();
        reply->deleteLater();//向主消息循环发送一个even,下一次主消息循环收到这个event之后会销毁对象
        return 0;
    }else{
        qDebug() << "httpRequest 异常 " ;
        return -1;
    }
}
