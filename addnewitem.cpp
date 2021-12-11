#include "addnewitem.h"
#include "ui_addnewitem.h"
#include <QWidget>

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


void AddNewItem::on_nextadd_clicked()
{
    hide();
    window = new AddNewItem2 (this);
    window -> show();
}

