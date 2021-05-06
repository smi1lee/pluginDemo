#ifndef T8CENTRAL_H
#define T8CENTRAL_H

#include "widgetfactory.h"
#include <QDebug>

class T8Central : public CentralWidget
{
    Q_OBJECT
public:
    T8Central(QWidget* parent = nullptr);
    void show() override{
        qDebug() << "T8Central show";
    }
};

#endif // T8CENTRAL_H
