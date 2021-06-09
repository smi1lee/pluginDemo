#ifndef TITLEDLL_H
#define TITLEDLL_H

#include "titledll_global.h"
#include <QEvent>
#include <QPushButton>

class TITLEDLL_EXPORT Titledll : public TitleWidget
{
public:
    Titledll();
    void show() override;
    void setParent(QWidget *parent = nullptr) override;

protected:
    virtual bool event(QEvent* event) override;

private:
    QWidget* m_pParent = nullptr;
    QPushButton* m_pBtn;
};

#endif // TITLEDLL_H
