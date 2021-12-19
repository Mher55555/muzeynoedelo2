#include "addnewitem3.h"
#include "ui_addnewitem3.h"
#include "QFileDialog"
#include <addnewitem2.h>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlDatabase>
#include <addnewitem.h>
#include <managermain.h>
#include<ui_managermain.h>
#include "mainwindow.h"
#include <addnewitem.h>
#include<QtSql/QSqlError>
#include <QApplication>
#include <serverthread.h>
#include <QtSql/QSqlDatabase>
AddNewItem3::AddNewItem3(QWidget *parent) :
    QMainWindow(parent),

    ui(new Ui::AddNewItem3)
{
    ui->setupUi(this);
    QMainWindow mm;
    mm.setWindowTitle("Создание экспоната");
    mm.show();
    QPixmap pix;
    pix.load(file);
    ui->label->setPixmap(pix);
    ui->label->setScaledContents(true);
setWindowTitle("Создание экспоната");

}
 QString imgName, imgPath;

AddNewItem3::~AddNewItem3()
{
    delete ui;
}

void AddNewItem3::on_pushButton_clicked()
{

    //Добаление файла картинки экспоната
    QFileDialog dialog(this);
        dialog.setNameFilter(tr("Images (*.png *.xpm *.jpg)"));
        dialog.setViewMode(QFileDialog::Detail);
        imgPath = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                        "C:/",
                                                        tr("Images (*.png *.xpm *.jpg)"));
        QPixmap pix(imgPath);
        qDebug() <<  imgPath;
imgName = QFileInfo (imgPath).baseName();
ui->label_3->setPixmap(pix);
int w = ui->label_3->width();
 int h = ui->label_3->height();
 ui->label_3->setPixmap(pix.scaled (w, h, Qt::KeepAspectRatio));

        if (imgPath.isEmpty()){
    return;
}



}



void AddNewItem3::on_publish_clicked()
{
// Сохранить в базу
//    QSqlQuery query;
//    query.prepare("INSERT INTO imgdb(filename; imgpath) VALUES (:fileName, imgPath)");
//    query.bindValue(":fileName", imgName);
//    query.bindValue("imgPath", imgPath);


//    if (!query.exec()){
//        qDebug()<< "Error inserting image into table:\n" << query.lastError();
//    }


    hide();

    ManagerMain *manager =new ManagerMain();
    manager->show();

}


void AddNewItem3::on_backtoadditem2_clicked()
{
    hide();
    AddNewItem2 *add2 =new AddNewItem2();
    add2->show();
}

