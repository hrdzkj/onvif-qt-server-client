/***************************************************
 * 类名:createConn.h
 * 功能:创建数据库连接接口类
 * 日期:
 * 作者:xhh
 * 备注:
 **************************************************/


#ifndef CREATECONN_H
#define CREATECONN_H
#include <QObject>
#include <QtSql>

class dbOperator : public QObject
{
       Q_OBJECT
private:
    QSqlDatabase  g_myDB;
    QString g_driver;//驱动名称
    QString g_userName;//数据库用户名
    QString g_password;//数据库用户密码
    void initDbConfig();

public:
    explicit dbOperator();
    ~dbOperator();

public://接口函数
    void setDriver(QString driverName);
    void setDBName(QString dbName);//设置数据库名称
    void setUserName(QString user);//设置用户名
    void setPassword(QString pass);//设置密码
    void setUserHost(QString host);//设置主机
    void setPort(int port);//设置端口
    bool openDB();//打开数据库
    bool isOpen();//判断数据库是否打开
    void closeDB();//关闭数据库
    QString lastErrorString();

public://sql操作接口函数
    //查询
    QList<QVariantMap> select(QString sql,QVariantList params = QVariantList());

    QSqlQueryModel *queryModel(QString sql);

    //执行sql语句
    bool exec(QString sql,QVariantList params = QVariantList(),int * lastInseredId = 0);

    //单个查询
    QVariant querySingleResult(QString sql,QVariantList params = QVariantList());

    //查询单个字段结果集
    QStringList queryOneFieldResult(QString sql,QVariantList params = QVariantList());

    //查询记录数
    int queryCount(QString sql,QVariantList params = QVariantList());

    bool beginTransaction();//开始事物
    bool endTransaction();//结束事物
    bool rollback();//回滚

public:
};

#endif // CREATECONN_H
