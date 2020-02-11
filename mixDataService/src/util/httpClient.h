#ifndef HTTPWORKER_H
#define HTTPWORKER_H
#include <QObject>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QAuthenticator>
#include <QTimer>
#include <QEventLoop>

#include "src/entity/entity.h"

class HttpClient : public QObject
{
    Q_OBJECT

private:
    QEventLoop eventLoop;
    int quitStatue=0;//记录退出原因
    QNetworkAccessManager manager;
    QTimer requestTimer;
public:
    int httpRequest(httpRequest_t *request, httpReply_t *reply);
 public slots:
    void test();

};
#endif // HTTPWORKER_H
