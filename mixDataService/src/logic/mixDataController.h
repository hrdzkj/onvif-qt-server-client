#ifndef MIXDATAWORKER_H
#define MIXDATAWORKER_H
#include <QObject>
#include <QDebug>
#include "src/entity/entity.h"
#include "src/util/httpClient.h"

class MixDataController : public QObject
  {
      Q_OBJECT

private:
    httpHeader_t headerPara_auth;
    httpHeader_t headerPara_ContentType;
    QString UserInfoID="021a666a-8753-446d-8ea0-f819ce4d77dc";
    QString baseURL="http://202.103.233.156:8066/LHP3Service/GXPublicService/GXPublic";
    HttpClient httpClient;

    //QString doMix(MixDevice &dev);
    QString getUserMNParamListByMN(QString MN);
    QString getUserMNDataList(QMap<QString,QString> map);
    QString makeToMixString(QString MNData,QString MNParamList);
  public:

      QString getMixData(MixDevice &dev);
public:
    MixDataController();


  };
#endif // MIXDATAWORKER_H
