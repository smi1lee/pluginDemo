#ifndef CENTRALDLL_H
#define CENTRALDLL_H

#include "Centraldll_global.h"

class CENTRALDLL_EXPORT Centraldll : public CentralWidget
{
public:
    Centraldll();
    void show() override;
    void setParent(QWidget *parent = nullptr) override;
private:
    QWidget* m_pParent = nullptr;
};

#endif // CENTRALDLL_H
