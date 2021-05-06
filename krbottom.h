#ifndef KRBOTTOM_H
#define KRBOTTOM_H

#include "widgetfactory.h"

class KRBottom : public BottomWidget
{
    Q_OBJECT
public:
    explicit KRBottom(QWidget* parent = nullptr);
    void show() override
    {
        qDebug() << "KRBottom show";
    }
signals:

};

#endif // KRBOTTOM_H
