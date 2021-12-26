#ifndef CONNECTION_H
#define CONNECTION_H
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDriver>
#include <QtSql>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlResult>
#include <serverthread.h>
inline bool createConnection(){
    //подключение к локальному базу PostgreSQL
    //без подключении базы в программе будет много ошибок при запуснке программы поэтому код с базой данных закомментирован
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
        db.setDatabaseName("adminmuzey");
        //db.setHostName("localhost");
        db.setUserName("admin");
        db.setPassword("admin");
        if(!db.open()){
            QMessageBox::warning(0,"Ошибка БД",db.lastError().text());
            return false;
        }
        else{
            QMessageBox::information(0,"успешно","соединение с бд установлено");
            return true;
        }



}
inline bool createTable()
{

    QSqlQuery query;
    query.exec("CREATE TABLE imgdb("
               "id INTEGER PRIMARY KEY AUTOINCREMENT,"
               "filename TEXT"
               "imgpath TEXT) ");

    return (1);
}
#endif // CONNECTION_H
