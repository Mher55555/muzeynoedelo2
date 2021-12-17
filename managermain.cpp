#include "managermain.h"
#include "ui_managermain.h"

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
    mains = new AddNewItem (this);
    mains -> show();
}
