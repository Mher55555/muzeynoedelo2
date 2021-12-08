#include "addnewitem3.h"
#include "ui_addnewitem3.h"
#include "QFileDialog"
AddNewItem3::AddNewItem3(QWidget *parent) :
    QMainWindow(parent),

    ui(new Ui::AddNewItem3)
{
    ui->setupUi(this);
    QPixmap pix;
    pix.load(file);
    ui->label->setPixmap(pix)
    ui->label->setScaledContents(true);


}

AddNewItem3::~AddNewItem3()
{
    delete ui;
}

void AddNewItem3::on_pushButton_clicked()
{
    QFileDialog dialog(this);
        dialog.setNameFilter(tr("Images (*.png *.xpm *.jpg)"));
        dialog.setViewMode(QFileDialog::Detail);
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                        "C:/",
                                                        tr("Images (*.png *.xpm *.jpg)"));


}


