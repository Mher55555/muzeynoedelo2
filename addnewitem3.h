#ifndef ADDNEWITEM3_H
#define ADDNEWITEM3_H
#include <QFile>
#include <QMainWindow>

namespace Ui {
class AddNewItem3;
}

class AddNewItem3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddNewItem3(QWidget *parent = nullptr);
    ~AddNewItem3();
     QString file;

private slots:
    void on_pushButton_clicked();


private:
    Ui::AddNewItem3 *ui;
};

#endif // ADDNEWITEM3_H
