#ifndef EDITINGDIALOG_H
#define EDITINGDIALOG_H

#include "pch.h"
#include "addmemberdialog.h"
#include <QDialog>
#include <QWidget>
#include "group.h"

class SmirnovMain;

namespace Ui {
class EditingDialog;
}

class EditingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditingDialog(SmirnovMain *smirnovMain, QWidget *parent = nullptr);
    ~EditingDialog();

    void displayObjects();

private slots:
    void on_deleteButton_clicked();

    void on_editButton_clicked();

    void on_addButton_clicked();

    void on_listWidget_currentRowChanged(int currentRow);

    void on_exitButton_clicked();

private:
    SmirnovGroup group_copy;
    SmirnovMain *smirnovMain;
    Ui::EditingDialog *ui;
};

#endif // EDITINGDIALOG_H
