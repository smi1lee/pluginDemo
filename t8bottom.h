#ifndef T8BOTTOM_H
#define T8BOTTOM_H

#include "widgetfactory.h"
#include <QDebug>

class T8bottom : public BottomWidget
{
public:
    T8bottom(QWidget* parent = nullptr);
    void show() override
    {
        qDebug() << "T8Bottom show";
    }
};

#endif // T8BOTTOM_H
