#include "addnewitem2.h"
#include "ui_addnewitem2.h"

AddNewItem2::AddNewItem2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddNewItem2)
{
    ui->setupUi(this);
}

AddNewItem2::~AddNewItem2()
{
    delete ui;
}
