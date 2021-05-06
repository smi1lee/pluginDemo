#ifndef T8TITLE_H
#define T8TITLE_H

#include "widgetfactory.h"
#include <QDebug>

class T8Title : public TitleWidget
{
    Q_OBJECT
public:
    T8Title(QWidget* parent = nullptr);
    void show() override {
        qDebug() << "T8Title show";
    }
};

#endif // T8TITLE_H
