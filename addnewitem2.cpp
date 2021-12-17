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



void AddNewItem2::on_pushButton_clicked()
{
    hide();
   window = new AddNewItem3 (this);
   window -> show();
}

