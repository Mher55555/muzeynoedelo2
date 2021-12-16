#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"
#include <QMessageBox>
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//образец создания и назначения картинки
    //путь к картинке
    QPixmap pix(":/resourec/img/1.jpg");
    //ширина
    int w = ui->image->width();
    //высота
    int h = ui->image->height();
    //присваеваем одоптирыванную картинку
    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString login = ui-> login-> text();
    QString password = ui-> password->text();

    if (login.compare("admin") == 0 && password.compare("admin") == 0){
        QMessageBox :: information(this, "Поздравляем", "Вы успешно авторизовались как администратор");
        hide();
        window = new Secondwindow (this);
        window -> show();

    }
}
