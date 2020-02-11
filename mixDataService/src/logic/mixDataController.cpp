#include "mixDataController.h"
#include "src/logic/global.h"
#include<QUrlQuery>
#include <QDebug>

MixDataController::MixDataController()
{
    //准备头部参数
    headerPara_auth.key.append("Authorization");
    headerPara_auth.value.append("gxxcspjk=EEE785CA70570783B9335D8AF8FAA90E");


    headerPara_ContentType.key.append("Content-Type");
    headerPara_ContentType.value.append("application/json");

}



QString MixDataController::getMixData(MixDevice &dev){
    QString MNData;
    QString MNParamList;
    QMap<QString,QString> map;
    //1.3) 根据MN,查询污染点参数说明

    //1.4）根据MN,查询污染点检测数据
    map.insert("UserInfoID",UserInfoID);
    map.insert("MN","45007711003002");
    map.insert("dataTypeID","2011");
    map.insert("startTime","2019-03-01 06:00:00");
    map.insert("endTime","2019-03-01 06:05:00");
    MNData=getUserMNDataList(map);
    //qDebug()<<"MNData= "<<MNData;
    if (QString(MNData).isEmpty()){
        return "";
    }

    MNParamList=getUserMNParamListByMN("45007711003002");
   // qDebug()<<"MNParamList= "<<MNParamList;
    if (QString(MNParamList).isEmpty()){
        return "";
    }

    //1.5）匹配整理成显示数据
    return makeToMixString(MNData,MNParamList);

}

QString MixDataController::makeToMixString(QString MNData,QString MNParamList)
{
   return  "test"; // todo 查看android app实现
}



QString MixDataController::getUserMNParamListByMN(QString MN){
    QUrl url;
    httpRequest_t request;
    httpReply_t reply;
    QUrlQuery urlQuery;
    int retCode = 0;
    //设置头部参数
    request.header.append(headerPara_auth);
    request.header.append(headerPara_ContentType);

    //设置参数
    urlQuery.addQueryItem("MN",MN);
    urlQuery.addQueryItem("UserInfoID",UserInfoID);

    //设置请求方法
    request.method = HTTP_METHOD_GET;

    //设置URL
    url.setUrl(baseURL+"/GetUserMNParamList?");
    url.setQuery(urlQuery);
    request.url = url;

    retCode = httpClient.httpRequest(&request, &reply);
    if (retCode==0){
        return reply.response;
    }else{
        return "";
    }
}

QString MixDataController::getUserMNDataList(QMap<QString,QString> map)
{
    QUrl url;
    httpRequest_t request;
    httpReply_t reply;
    QUrlQuery urlQuery;
    int retCode = 0;

    //设置头部参数
    request.header.append(headerPara_auth);
    request.header.append(headerPara_ContentType);

    //设置参数
    QMapIterator<QString, QString> i(map);
    while (i.hasNext()) {
        i.next();
        urlQuery.addQueryItem(i.key(), i.value());
    }


    //设置请求方法
    request.method = HTTP_METHOD_GET;

    //设置URL
    url.setUrl(baseURL+"/GetUserMNDataList?");
    url.setQuery(urlQuery);
    request.url = url;

    retCode = httpClient.httpRequest(&request, &reply);
    if (retCode==0){
        return reply.response;
    }else{
        return "";
    }
}

