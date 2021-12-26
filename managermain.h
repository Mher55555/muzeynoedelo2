#ifndef MANAGERMAIN_H
#define MANAGERMAIN_H
#include <addnewitem.h>
#include <QMainWindow>

namespace Ui {
class ManagerMain;
}

class ManagerMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit ManagerMain(QWidget *parent = nullptr);
    ~ManagerMain();

public slots:
    void on_createitem_clicked(int row);
signals:
    void showadd();
private slots:
    void on_outsystem_clicked();

private:
    Ui::ManagerMain *ui;

};




#endif // MANAGERMAIN_H
