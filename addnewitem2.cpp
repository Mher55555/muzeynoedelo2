#include "addnewitem2.h"
#include "ui_addnewitem2.h"
#include <QComboBox>
#include "addnewitem.h"

AddNewItem2::AddNewItem2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddNewItem2)
{
    ui->setupUi(this);
   setWindowTitle("Создание экспоната");


}

AddNewItem2::~AddNewItem2()
{
    delete ui;
}




void AddNewItem2::on_gotoadditem3_clicked()
{
    hide();
    AddNewItem3 *add3 = new AddNewItem3();
    add3->show();
}


void AddNewItem2::on_backtonewitem1_clicked()
{
    hide();
    AddNewItem *add1 = new AddNewItem();
    add1->show();
}

