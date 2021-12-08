#ifndef ADDNEWITEM_H
#define ADDNEWITEM_H

#include <QMainWindow>

namespace Ui {
class AddNewItem;
}

class AddNewItem : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddNewItem(QWidget *parent = nullptr);
    ~AddNewItem();

private:
    Ui::AddNewItem *ui;
};

#endif // ADDNEWITEM_H
