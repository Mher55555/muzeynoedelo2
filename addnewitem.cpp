#include "addnewitem.h"
#include "ui_addnewitem.h"

AddNewItem::AddNewItem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddNewItem)
{
    ui->setupUi(this);
}

AddNewItem::~AddNewItem()
{
    delete ui;
}
