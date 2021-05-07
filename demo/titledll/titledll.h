#ifndef TITLEDLL_H
#define TITLEDLL_H

#include "titledll_global.h"

class TITLEDLL_EXPORT Titledll : public TitleWidget
{
public:
    Titledll();
    void show() override;
    void setParent(QWidget *parent = nullptr) override;
private:
    QWidget* m_pParent = nullptr;
};

#endif // TITLEDLL_H
