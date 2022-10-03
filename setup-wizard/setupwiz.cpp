#include "setupwiz.h"
#include "ui_setupwiz.h"

SetupWiz::SetupWiz(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SetupWiz)
{
    ui->setupUi(this);
}

SetupWiz::~SetupWiz()
{
    delete ui;
}

