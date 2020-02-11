#ifndef ENTITY_H
#define ENTITY_H

#include <QString>
#include <QUrl>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>


//部门  t_department->DepartmentInfo
typedef struct MixDevice
{
    //ipc信息
    QString groupName;
    QString IPCAddress;
    QString devRelation; //关联、解除、删除
    QString IPCStatue;// IPC状态(内存)：在线、离线、未知
    QString userName;
    QString password;

    //检测点信息
    QString MN;
    QString MNName;
    QString STName;

    //渲染信息
    QString OSDToken;
    QString preMixValue;
    QString preMixTime;
    QString lastGetValue; //(内存)
    QString lastGetTime; //(内存)

    //本条记录的维护信息
    QString modifyTime;//记录修改时间
    //bool isDo; //是否处理(内存)
    //bool isShow;//是否显示
}MixDevice;

typedef struct {
    QByteArray key;
    QByteArray value;
} httpHeader_t;

typedef enum {
    HTTP_METHOD_GET = 0,
    HTTP_METHOD_POST = 1,
    HTTP_METHOD_PUT = 2,
    HTTP_METHOD_HEAD = 3,
    HTTP_METHOD_DELETE = 4,
} httpMethod_e;

typedef struct {
    httpMethod_e method;
    QUrl url;
    QList<httpHeader_t> header;
    QByteArray postData;
} httpRequest_t;

typedef struct {
    int httpCode;
    QList<httpHeader_t> header;
    QByteArray response;
} httpReply_t;

#endif // ENTITY_H
