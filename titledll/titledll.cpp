#include "titledll.h"
#include <QDebug>
#include <QApplication>
#include "CGlobalSubPub.h"
#include "Publisher.h"

Titledll::Titledll()
{
    m_pBtn = new QPushButton(this);
    connect(m_pBtn, &QPushButton::clicked, this, [=] {
        QVariantList data;
        data << "111111";
        //CGlobalSubPub::PostEvent("type1", data);
        //CGlobalSubPub::PostEvent("type1", data);
        Publisher::PublishEvent(111);
        //Publisher::PublishEvent(111, data);
    });
}

void Titledll::show()
{
    qDebug() << "show Titledll";
}

void Titledll::setParent(QWidget *parent)
{
    show();
    m_pParent = parent;
}

bool Titledll::event(QEvent* event)
{
    switch (event->type())
    {
    default:
        break;
    }
    return QWidget::event(event);
}

TITLEDLL_EXPORT TitleWidget* CreateTitleWidget()
{
    return new Titledll;
}