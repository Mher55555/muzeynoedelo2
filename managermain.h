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

private:
    void on_createitem_clicked();

private:
    Ui::ManagerMain *ui;
     AddNewItem *mains;
};

#endif // MANAGERMAIN_H
