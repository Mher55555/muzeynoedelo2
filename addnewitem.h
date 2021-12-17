#ifndef ADDNEWITEM_H
#define ADDNEWITEM_H

#include <QMainWindow>
#include <addnewitem2.h>
namespace Ui {
class AddNewItem;
}

class AddNewItem : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddNewItem(QWidget *parent = nullptr);
    ~AddNewItem();
private slots:
    void on_bactomain_clicked();
    void on_nextadd_clicked();

    void on_backtomain_clicked();

private:
    Ui::AddNewItem *ui;
    AddNewItem2 *window;
};

#endif // ADDNEWITEM_H
