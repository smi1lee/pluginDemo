#include "krcentral.h"

KRCentral::KRCentral(QWidget* parent)
{
    m_pLabel = new QLabel(this);
    m_pLabel->setMinimumWidth(200);
}

bool KRCentral::event(QEvent *event)
{
    switch (event->type()) {
    case testType::type2:
        m_pLabel->setText("receive event");
        break;
    }
    return QWidget::event(event);
}
