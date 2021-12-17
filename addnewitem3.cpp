#include "addnewitem3.h"
#include "ui_addnewitem3.h"
#include "QFileDialog"
#include <addnewitem2.h>
#include <addnewitem.h>
#include <managermain.h>
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
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                        "C:/",
                                                        tr("Images (*.png *.xpm *.jpg)"));


}



void AddNewItem3::on_publish_clicked()
{
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

