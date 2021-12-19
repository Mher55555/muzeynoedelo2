#include "addnewitem.h"
#include "ui_addnewitem.h"
#include <QWidget>
#include <addnewitem.h>
#include <managermain.h>
#include <mainwindow.h>
AddNewItem::AddNewItem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddNewItem)
{
    ui->setupUi(this);
   setWindowTitle("Создание экспоната");
}

AddNewItem::~AddNewItem()
{
    delete ui;
}


void AddNewItem::on_bactomain_clicked(){}
void AddNewItem::on_nextadd_clicked(){}
void AddNewItem::on_backtomain_clicked(){

    hide();
    ManagerMain *manager = new ManagerMain();
    manager ->show();
    emit showadd2();
}

void AddNewItem::on_nextadditem2_clicked()
{
    hide();
    AddNewItem2 *add2 = new AddNewItem2();
    add2 ->show();

        emit showadd2();
}


