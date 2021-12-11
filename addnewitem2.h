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
    void on_back1_clicked();

    void on_pushButton_clicked();

private:
    Ui::AddNewItem2 *ui;
    AddNewItem3 * window;
};

#endif // ADDNEWITEM2_H
