#ifndef COMINTERFACE_H
#define COMINTERFACE_H

#include <QWidget>

class TitleWidget : public QWidget
{
public:
    virtual void show() = 0;
    virtual void setParent(QWidget* parent = nullptr) = 0;
};

class CentralWidget : public QWidget
{
public:
    virtual void show() = 0;
    virtual void setParent(QWidget* parent = nullptr) = 0;
};

class BottomWidget : public QWidget
{
public:
    virtual void show() = 0;
    virtual void setParent(QWidget* parent = nullptr) = 0;
};

#endif // COMINTERFACE_H
