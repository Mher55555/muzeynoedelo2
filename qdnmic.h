#ifndef QDNMIC_H
#define QDNMIC_H


#include <QPushButton>
class qdynamic : public QPushButton
{
    Q_OBJECT
public:
    explicit qdynamic(QWidget *parent = 0);
    ~qdynamic();
    static int ResID;   // Статическая переменная, счетчик номеров кнопок
    int getID();        // Функция для возврата локального номера кнопки


public slots:

private:
    int buttonID = 0;   // Локальная переменная, номер кнопки
};
#endif // QDNMIC_H
