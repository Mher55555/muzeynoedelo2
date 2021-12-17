#ifndef ADDNEWITEM2_H
#define ADDNEWITEM2_H

#include <QMainWindow>
#include <addnewitem3.h>

namespace Ui {
class AddNewItem2;
}

class AddNewItem2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddNewItem2(QWidget *parent = nullptr);
    ~AddNewItem2();

private slots:
    void on_gotoadditem3_clicked();
    void on_backtonewitem1_clicked();

signals:
    void showadd3();
private:
    Ui::AddNewItem2 *ui;

};

#endif // ADDNEWITEM2_H
