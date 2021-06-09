#ifndef CENTRALDLL_H
#define CENTRALDLL_H

#include "Centraldll_global.h"
#include "ComInterface.h"
#include "Publisher.h"
#include <QEvent>

class CENTRALDLL_EXPORT Centraldll : public CentralWidget, public SubInterface
{
public:
    Centraldll(QWidget* parent = nullptr);
    ~Centraldll();
    void show() override;
    void setParent(QWidget *parent = nullptr) override;

protected:
    virtual bool event(QEvent* event) override;

public slots:
    virtual void ReceiveEvent(int iType);
    virtual void ReceiveEvent(int iType, const QVariant& variant);
    virtual void ReceiveEvent(int iType, const QVariant& variant, const QVariant& variant1);
    virtual void ReceiveEvent(int iType, const QVariant& variant, const QVariant& variant1, const QVariant& variant2);

private:
    QWidget* m_pParent = nullptr;
};

#endif // CENTRALDLL_H
