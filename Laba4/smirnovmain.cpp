#include "smirnovmain.h"
#include "./ui_smirnovmain.h"
#include <QFileDialog>

SmirnovMain::SmirnovMain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SmirnovMain)
{
    ui->setupUi(this);

    //connect(ui->pushButton, &QPushButton::clicked, this, &SmirnovMain::on_pushButton_clicked);
    disp();
}

SmirnovMain::~SmirnovMain()
{
    delete ui;
}

void SmirnovMain::disp() {
    ui->widget->displayAllObject(group.getMembers());
}

void SmirnovMain::on_actionOpen_triggered()
{
    filename = QFileDialog::getOpenFileName(this, tr("Load Group"), QDir::currentPath(), tr("Group Files (*.grp)"));
    group.loadFromFile(filename.toStdString());
    disp();
}


void SmirnovMain::on_actionSave_triggered()
{
    if (filename.isEmpty()) {
        on_actionSave_As_triggered();
    } else {
        save();
    }
}

void SmirnovMain::save()
{
    group.saveToFile(filename.toStdString());
}


void SmirnovMain::on_pushButton_clicked()
{
    EditingDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
    }
    else {
    }
}


void SmirnovMain::on_actionSave_As_triggered()
{
    filename = QFileDialog::getSaveFileName(this, tr("Save Group"), QDir::currentPath(), tr("Group Files (*.grp)"));
    if (!filename.isEmpty()) {
        save();
    }
}


void SmirnovMain::on_pushButton_2_clicked()
{
    group.clear();
    ui->widget->clean(group.getMembers());
    disp();
}

