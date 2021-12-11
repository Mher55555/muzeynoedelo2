#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
     //название экрана
 setWindowTitle("Вход");
 //размещение изображения и фиксация
       QPixmap pix(":/new/src/xl-GV0WBjc2LG6-v8Zo9Rcv51O44jFsS0gZhQuB4o60HKc3DC5cEjc3s7quGqLpFOQMytifbOt9jLbBWyKMi5onL.jpg");
       int w = ui->labelsplash->width();
        int h = ui->labelsplash->height();
        ui->labelsplash->setPixmap(pix.scaled (w, h, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString login = ui-> login-> text();
    QString password = ui-> password->text();
//вход и проверка админа
    if (login.compare("admin") == 0 && password.compare("admin") == 0){
        QMessageBox :: information(this, "Поздравляем", "Вы успешно авторизовались как администратор");
        hide();
        windows = new ManagerMain (this);
        windows -> show();

    }

}

