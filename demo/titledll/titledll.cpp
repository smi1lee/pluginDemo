#include "titledll.h"
#include <QDebug>

Titledll::Titledll()
{
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

TITLEDLL_EXPORT TitleWidget* CreateTitleWidget()
{
    return new Titledll;
}