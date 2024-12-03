#ifndef SMIRNOVMAIN_H
#define SMIRNOVMAIN_H

#include <QMainWindow>
#include <QPushButton>
#include "group.h"
#include "mywidget3.h"
#include "editingdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class SmirnovMain;
}
QT_END_NAMESPACE

class SmirnovMain : public QMainWindow
{
    Q_OBJECT
    QString filename;

public:
    SmirnovGroup group;

    void disp();

    SmirnovMain(QWidget *parent = nullptr);
    ~SmirnovMain();

private slots:
    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void save();

    void on_pushButton_clicked();

    void on_actionSave_As_triggered();

    void on_pushButton_2_clicked();

private:
    Ui::SmirnovMain *ui;
};
#endif // SMIRNOVMAIN_H
