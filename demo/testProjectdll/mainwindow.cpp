#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "widgetfactory.h"
#include "krfactory.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    WidgetFactory *factory = new KRFactory;
    TitleWidget *pKRTitle = factory->createTitleWidget(this);
    CentralWidget *pKRCentral = factory->createCentralWidget(this);
    QVBoxLayout *pLayout = new QVBoxLayout(ui->centralwidget);
    pLayout->addWidget(pKRTitle);
    pLayout->addWidget(pKRCentral);
}

MainWindow::~MainWindow()
{
    delete ui;
}

