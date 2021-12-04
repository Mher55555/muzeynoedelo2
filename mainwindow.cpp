#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString login = ui-> login-> text();
    QString password = ui-> password->text();

    if (login == "admin" && password =="admin"){
        QMessageBox :: information(this, "Поздравляем", "Вы успешно авторизовались как администратор");
        hide();
        window = new Secondwindow (this);
        window -> show();

    }

}

