#ifndef SETUPWIZ_H
#define SETUPWIZ_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SetupWiz; }
QT_END_NAMESPACE

class SetupWiz : public QMainWindow
{
    Q_OBJECT

public:
    SetupWiz(QWidget *parent = nullptr);
    ~SetupWiz();

private:
    Ui::SetupWiz *ui;
};
#endif // SETUPWIZ_H
