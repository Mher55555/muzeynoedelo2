#include "managermain.h"
#include "ui_managermain.h"
#include <main.cpp>
#include <addnewitem.h>
#include <addnewitem2.h>
#include <addnewitem3.h>
#include <mainwindow.h>
#include <QStringList>
#include <QTableWidget>
ManagerMain::ManagerMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ManagerMain)
{
    ui->setupUi(this);
    setWindowTitle("Главный экран");

    //Считать из базы
    ui->itemTable->setColumnCount(3);
    QStringList headerName;
    headerName<< "id"<<"Имя файла"<< "Минатюра";
    ui->itemTable->setHorizontalHeaderLabels(headerName);
    QSqlQuery query;
    QString zapros ("SELECT * from imgdb");//считываем всё из таблицы imgdb
    query.exec(zapros);

    int rowCount =0;
    while (query.next())//заполнение таблицы из базы
    {
        ui->itemTable->insertRow(rowCount);
        QTableWidgetItem *id= new QTableWidgetItem;
        QTableWidgetItem *filename= new QTableWidgetItem;
        QTableWidgetItem *imgpath= new QTableWidgetItem;
        id->setText(query.value(0).toString());
        filename->setText(query.value(1).toString());



        QString img_path=query.value(2).toString();
        imgpath->setData(Qt::DecorationRole, QPixmap(img_path).scaled(80,80,Qt::KeepAspectRatio,Qt::SmoothTransformation));
        imgpath->setText(query.value(2).toString());
        ui->itemTable->setItem(rowCount,0,id);
        ui->itemTable->setItem(rowCount,1,filename);
        ui->itemTable->setItem(rowCount,2,imgpath);

        filename->setTextAlignment(Qt::AlignCenter|Qt::AlignVCenter);
        ui->itemTable->setRowHeight(rowCount,80);
        ui->itemTable->setColumnWidth(1,200);
        ui->itemTable->setColumnWidth(2,80);

        rowCount++;





    }

 //Отображение
    ui->itemTable->setColumnHidden(0,true);
    ui->itemTable->setEditTriggers(QAbstractItemView::NoEditTriggers);




}



ManagerMain::~ManagerMain()
{
    delete ui;
}

void ManagerMain::on_createitem_clicked(int row)
{
    //переход между главным экраном и экраном создании экспоната
hide();
AddNewItem *add1 = new AddNewItem();
add1 ->show();


//Отображение главного экрана админа с экспонатами
ui->label_2->setText(ui->itemTable->item(row,1)->text());
ui->label->setPixmap(QPixmap(ui->itemTable->item(row,2)->text()));
    emit showadd();
}




void ManagerMain::on_outsystem_clicked()
{
    hide();
    MainWindow *w = new MainWindow();
    w ->show();

        emit showadd();
}

