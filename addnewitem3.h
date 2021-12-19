#ifndef ADDNEWITEM3_H
#define ADDNEWITEM3_H
#include <QFile>

#include <QMainWindow>
#include <addnewitem2.h>

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
    void on_publish_clicked();
    void on_backtoadditem2_clicked();

signals:
    void showadd3();
private:
    Ui::AddNewItem3 *ui;
};

#endif // ADDNEWITEM3_H
