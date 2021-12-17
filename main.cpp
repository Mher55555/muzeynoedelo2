#include "mainwindow.h"
#include <managermain.h>
#include <addnewitem.h>
#include <addnewitem2.h>
#include <QApplication>
#include <addnewitem3.h>
#include <serverthread.h>
#include <QtSql/QSqlDatabase>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    AddNewItem add1;
    AddNewItem2 add2;
    AddNewItem3 add3;
    ManagerMain manager;


    // подключение сигналов и слотов для переключения между экранами
      QObject::connect(&w,SIGNAL(showmanagermain()),&manager,SLOT(on_auth_clicked()));
      QObject::connect(&add1,SIGNAL(showadd()),&add1,SLOT(on_createitem_clicked()));
      QObject::connect(&add3,SIGNAL(showadd3()),&add1,SLOT(on_gotoadditem3_clicked()));
      QObject::connect(&add1,SIGNAL(showadd1()),&add2,SLOT(on_backtonewitem1_clicked()));
      QObject::connect(&add2,SIGNAL(showadd2()),&add1,SLOT(on_backtoadditem2_clicked()));
      QObject::connect(&manager,SIGNAL(showadd1()),&add3,SLOT(on_publish_clicked()));



      //проверка работоспособности приложения если серверный поток подключился значит приложение успешно запустился, если нет то это значит что возникла ошибка
    ServerThread servThread;

    servThread.run();

    //подключение к локальному базу PostgreSQL

    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
        db.setHostName("127.0.0.1");
        db.setDatabaseName("adminmuzey");
        db.setUserName("admin");
        db.setPassword("admin");
        if(db.open())
            qDebug()<<"succes";
        else
            qDebug()<<"false";


    w.show();

    return a.exec();
}
