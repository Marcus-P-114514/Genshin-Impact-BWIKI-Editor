#include "setupwiz.h"
#include "ui_setupwiz.h"

SetupWiz::SetupWiz(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SetupWiz)
{
    ui->setupUi(this);
    setWindowFlags (Qt::FramelessWindowHint);
    setWindowOpacity(0.7);
    setAttribute(Qt::WA_TranslucentBackground);
    this->setStyleSheet("QWidget{background-color: white; border: 0px solid #ccc; border-radius: 30px;}");
}

SetupWiz::~SetupWiz()
{
    delete ui;
}

