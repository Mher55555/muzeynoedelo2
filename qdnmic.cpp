#include "qdnmic.h"


qdynamic::qdynamic(QWidget *parent) :
    QPushButton(parent)
{
    ResID++;            // Увеличение счетчика на единицу
    buttonID = ResID;   /* Присвоение кнопке номера, по которому будет производиться
                         * дальнейшая работа с кнопок
                         * */

}

qdynamic::~qdynamic()
{

}

/* Метод для возврата значения номера кнопки
 * */
int qdynamic::getID()
{
    return buttonID;
}

/* Инициализация статической переменной класса.
 * Статическая переменная класса должна инициализироваться в обязательном порядке
 * */
int qdynamic::ResID = 0;
