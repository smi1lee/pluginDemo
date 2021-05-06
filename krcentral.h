#ifndef KRCENTRAL_H
#define KRCENTRAL_H

#include "widgetfactory.h"
#include <QLabel>

class KRCentral : public CentralWidget
{
    Q_OBJECT
public:
    explicit KRCentral(QWidget* parent = nullptr);
    void show() override
    {
        qDebug() << "KRCentral show";
    }

protected:
    virtual bool event(QEvent *event) override;
signals:

private:
    QLabel *m_pLabel = nullptr;

};

#endif // KRCENTRAL_H
