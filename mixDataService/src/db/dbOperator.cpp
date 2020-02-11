#include "dbOperator.h"
#include <QException>
#include <QDebug>
#include <QTextCodec>



void dbOperator::initDbConfig()
{
    setDriver("QMYSQL");
    setPort(3306);
    setDBName("mixdb");
    setUserName("root");
    setPassword("111111");

}
/***************************************************
 * 名称:createConn
 * 功能:构造函数
 * 输入:无
 * 输出:无
 * 备注:
 **************************************************/
dbOperator::dbOperator()
{
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");//情况2
    QTextCodec::setCodecForLocale(codec);
    initDbConfig();
    openDB();
}

/***************************************************
 * 名称:setDriver
 * 功能:设置数据库驱动名称
 * 输入:driverName：数据库驱动名称
 * 输出:无
 * 备注:
 **************************************************/
void dbOperator::setDriver(QString driverName)
{
    try{
        //驱动名称为不能为空
        if(driverName.isEmpty())
        {
            //抛出数据库名称不能为空的异常信息
        }
        g_driver = driverName;
        //获取所有数据库驱动进行校验
        QStringList driverList = QSqlDatabase::drivers();
        qDebug() << driverList;
        if(driverList.contains(g_driver))
        {
            //抛出数据库驱动不对的异常信息
        }
        g_myDB = QSqlDatabase::addDatabase(g_driver,"hf_all");//第二个参数标志唯一，以防冲突
    }
    catch(QException){
        qDebug()<<"throw exception";
    }
}

/***************************************************
 * 名称:CreateConn
 * 功能:析构函数 释放资源
 * 输入:无
 * 输出:无
 * 备注:
 **************************************************/
dbOperator::~dbOperator(){
    //关闭数据库
    closeDB();
}

/***************************************************
 * 名称:setDBName
 * 功能:设置数据库名称
 * 输入:dbName 名称
 * 输出:无
 * 备注:
 **************************************************/
void dbOperator::setDBName(QString dbName)
{
    if(!dbName.isEmpty())
    {
        g_myDB.setDatabaseName(dbName);
    }
}

/***************************************************
 * 名称:setUserName
 * 功能:设置用户名称
 * 输入:user 用户名称
 * 输出:无
 * 备注:
 **************************************************/
void dbOperator::setUserName(QString user)
{
    if(!user.isEmpty())
    {
        g_userName=user;
        g_myDB.setUserName(user);
    }
}

/***************************************************
 * 名称:setUserPass
 * 功能:设置用户密码
 * 输入:pass 用户密码
 * 输出:无
 * 备注:
 **************************************************/
void dbOperator::setPassword(QString pass)
{
    if(!pass.isEmpty())
    {
        g_password=pass;
        g_myDB.setPassword(pass);
    }
}


/***************************************************
 * 名称:setUserHost
 * 功能:设置地址
 * 输入:host 地址
 * 输出:无
 * 备注:
 **************************************************/
void dbOperator::setUserHost(QString host)
{
    if(!host.isEmpty())
    {
        g_myDB.setHostName(host);
    }
}

/***************************************************
 * 名称:setUserPort
 * 功能:设置端口
 * 输入:port 端口
 * 输出:无
 * 备注:
 **************************************************/
void dbOperator::setPort(int port)
{
    if(port>0)
    {
        g_myDB.setPort(port);
    }
}

/***************************************************
 * 名称:openDB
 * 功能:打开数据库
 * 输入:无
 * 输出:无
 * 备注:
 **************************************************/
bool dbOperator::openDB()
{
    if (g_myDB.isOpen()){
        return true;
    }

    //校验数据库是否已经打开
    if (!g_myDB.open()) {
        qDebug() << g_myDB.lastError().text();
        qDebug() << "数据库连接失败。";
        return false;
    }
    else{
        return true;

    }
}

QString dbOperator::lastErrorString()
{
    return g_myDB.lastError().text();
}
/***************************************************
 * 名称:isOpenDB
 * 功能:校验数据库是否打开
 * 输入:无
 * 输出:无
 * 备注:
 **************************************************/
bool dbOperator::isOpen()
{
    bool flag = g_myDB.isOpen();
    return flag;
}

/***************************************************
 * 名称:closeDB
 * 功能:关闭数据库
 * 输入:无
 * 输出:无
 * 备注:
 **************************************************/
void dbOperator::closeDB()
{
    g_myDB.close();
}



/***************************************************
 * 名称:query
 * 功能:查询sql
 * 输入:sql sql语句，params 查询参数
 * 输出:QList<QVariantMap> 结果集
 * 备注:
 **************************************************/
QList<QVariantMap> dbOperator::select(QString sql, QVariantList params)
{
    QList<QVariantMap> result;
    if(!g_myDB.isOpen())
    {
        g_myDB.open();
    }

    QSqlQuery gquery(g_myDB);
    gquery.prepare(sql);
    //if (params != NULL && params.size()>0){
        for( int i = 0 ;i < params.size();i++)
        {
            QVariant & p = params[i];
            gquery.bindValue(i,p);
        }
    //}

    gquery.exec();
    while(gquery.next())
    {
        QSqlRecord record = gquery.record();
        int fieldCount = record.count();

        QVariantMap rowMap ;
        for(int i = 0 ; i < fieldCount ; i++)
        {
            QString fieldName = record.fieldName(i);
            QVariant fieldValue = record.value(i);
            qDebug() << fieldName << "----" << fieldValue.toString();
            rowMap.insert(fieldName,fieldValue);
        }
        result.append(rowMap);
    }
    QSqlError error = gquery.lastError();
    if(error.type() != QSqlError::NoError)
    {
        qDebug()<<error.text();
    }

    return result;
}

/***************************************************
 * 名称:queryModel
 * 功能:查询sql,返回一个QSqlQueryModel
 * 输入:sql sql语句
 * 输出:QSqlQueryModel 结果集
 * 备注:
 **************************************************/
QSqlQueryModel* dbOperator::queryModel(QString sql)
{
    QSqlQueryModel *model = new QSqlQueryModel();

    if(!g_myDB.isOpen())
    {
        g_myDB.open();
    }

    model->setQuery(sql,g_myDB);
    //    QSqlRecord record = model->record();
    //    int fieldCount = record.count();
    //    for(int i = 0 ; i < fieldCount ; i++)
    //    {
    //        QString fieldName = record.fieldName(i);
    //        model->setHeaderData(i,Qt::Horizontal,fieldName);
    //    }
    return model;
}

/***************************************************
 * 名称:exec
 * 功能:sql执行函数
 * 输入:sql sql语句，params 查询参数，lastInseredId 插入id
 * 输出:false 失败，true 成功
 * 备注:
 **************************************************/
bool dbOperator::exec(QString sql, QVariantList params, int *lastInseredId)
{
    if(!g_myDB.isOpen())
    {
        g_myDB.open();
    }

    QSqlQuery query(g_myDB);
    query.prepare(sql);
    for( int i = 0 ;i < params.size();i++)
    {
        QVariant & p = params[i];
        query.bindValue(i,p);
    }


    if(query.exec())
    {
        if(lastInseredId)
        {
            *lastInseredId = query.lastInsertId().toInt();
        }
        return true;
    }else
    {
        QSqlError error = query.lastError();
        qDebug()<<error.text();
        return false;
    }
}

/***************************************************
 * 名称:querySingleResult
 * 功能:查询单个结果
 * 输入:sql sql语句，params 查询参数
 * 输出:QVariant 结果集
 * 备注:
 **************************************************/
QVariant dbOperator::querySingleResult(QString sql, QVariantList params)
{
    QList<QVariantMap> result = select(sql,params);

    for(int i=0;i<result.size();i++)
    {
        QVariantMap map = result[i];
    }
    if(!result.isEmpty())
    {
        if(!result[0].isEmpty())
        {
            return result[0].first();
        }
    }
    return QVariant();
}

/***************************************************
 * 名称:queryOneFieldResult
 * 功能:查询单个字段结果集
 * 输入:sql sql语句，params 查询参数
 * 输出:QVariant 结果集
 * 备注:
 **************************************************/
QStringList dbOperator::queryOneFieldResult(QString sql, QVariantList params)
{
    QList<QVariantMap> result = select(sql,params);

    QStringList list;
    for(int i=0;i<result.size();i++)
    {
        QVariantMap map = result[i];
        list << map.first().toString();
    }
    return list;
}

/***************************************************
 * 名称:queryCount
 * 功能:查询记录总数
 * 输入:sql sql语句，params 查询参数
 * 输出:记录数
 * 备注:
 **************************************************/
int dbOperator::queryCount(QString sql, QVariantList params)
{
    int result=0;
    if(!g_myDB.isOpen())
    {
        g_myDB.open();
    }

    QSqlQuery query(g_myDB);
    query.prepare(sql);
    for( int i = 0 ;i < params.size();i++)
    {
        QVariant & p = params[i];
        query.bindValue(i,p);
    }

    query.exec();

    while(query.next())
    {
        result = query.value(0).toInt();
    }
    return result;
}

/***************************************************
 * 名称:beginTransaction
 * 功能:开始事物
 * 输入:无
 * 输出:无
 * 备注:
 **************************************************/
bool dbOperator::beginTransaction()
{
    return g_myDB.transaction();
}

/***************************************************
 * 名称:endTransaction
 * 功能:结束事物
 * 输入:无
 * 输出:无
 * 备注:
 **************************************************/
bool dbOperator::endTransaction()
{
    return g_myDB.commit();
}

/***************************************************
 * 名称:rollback
 * 功能:回滚操作
 * 输入:无
 * 输出:无
 * 备注:
 **************************************************/
bool dbOperator::rollback()
{
    g_myDB.rollback();
    return true;
}
