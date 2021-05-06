#ifndef KRTITLE_H
#define KRTITLE_H

#include "widgetfactory.h"
#include <QPushButton>

class KRTitle : public TitleWidget
{
    Q_OBJECT
public:
    explicit KRTitle(QWidget* parent = nullptr);
    void show() override
    {
        qDebug() << "KRTitle show";
    }
signals:

private:
    QPushButton* m_pBtn;

};

#endif // KRTITLE_H
