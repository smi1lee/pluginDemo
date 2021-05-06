#include "krtitle.h"
#include <QApplication>
#include <QEvent>

KRTitle::KRTitle(QWidget* parent)
{
    m_pBtn = new QPushButton("test1111", this);
    connect(m_pBtn, &QPushButton::clicked, this, [=]{
        QEvent event((QEvent::Type)testType::type1);
        QApplication::sendEvent(parent, &event);
    });
}
