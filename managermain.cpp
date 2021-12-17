#include "managermain.h"
#include "ui_managermain.h"
#include <main.cpp>
#include <addnewitem.h>
#include <addnewitem2.h>
#include <addnewitem3.h>
#include <mainwindow.h>
ManagerMain::ManagerMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ManagerMain)
{
    ui->setupUi(this);
    setWindowTitle("Главный экран");
}

ManagerMain::~ManagerMain()
{
    delete ui;
}

void ManagerMain::on_createitem_clicked()
{
    //переход между главным экраном и экраном создании экспоната
hide();
AddNewItem *add1 = new AddNewItem();
add1 ->show();

    emit showadd();
}




void ManagerMain::on_outsystem_clicked()
{
    hide();
    MainWindow *w = new MainWindow();
    w ->show();

        emit showadd();
}

