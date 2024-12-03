#include "editingdialog.h"
#include "ui_editingdialog.h"
#include "smirnovmain.h"

EditingDialog::EditingDialog(SmirnovMain *smirnovMain, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditingDialog)
    , smirnovMain(smirnovMain)
{
    ui->setupUi(this);

    ui->name->hide();
    ui->label->hide();

    ui->age->hide();
    ui->label_2->hide();

    ui->height->hide();
    ui->label_3->hide();

    ui->weight->hide();
    ui->label_4->hide();

    ui->university->hide();
    ui->label_5->hide();

    ui->pass->hide();
    ui->label_6->hide();

    group_copy = smirnovMain->group;

    displayObjects();
    setFixedSize(width(), height());
}

EditingDialog::~EditingDialog()
{
    delete ui;
}

void EditingDialog::displayObjects() {
    vector<shared_ptr<SmirnovHuman>>& members = group_copy.getMembers();
    for_each(members.begin(), members.end(), [this](auto& obj) {
        ui->listWidget->addItem(obj->getName());
    });
}

void EditingDialog::on_deleteButton_clicked()
{
    int idx = ui->listWidget->currentRow();

    if (idx != -1) {
        group_copy.deleteMember(idx);
        ui->listWidget->blockSignals(true);
        delete ui->listWidget->takeItem(idx);
        if (ui->listWidget->count() == idx) {
            on_listWidget_currentRowChanged(idx-1);
        } else {
            on_listWidget_currentRowChanged(idx);
        }
        ui->listWidget->blockSignals(false);
    } else {
        QMessageBox::warning(this, "No Selection", "No item selected.");
    }
}


void EditingDialog::on_editButton_clicked()
{
    int idx = ui->listWidget->currentRow();


    if (idx != -1) {
        auto existingObject = group_copy.getMembers()[idx];
        AddMemberDialog editDialog(existingObject, this);
        if (editDialog.exec() == QDialog::Accepted) {
            auto editedObject = editDialog.getCreatedObject();
            group_copy.changeMember(idx, editedObject);
            ui->listWidget->item(idx)->setText(editedObject->getName());
            on_listWidget_currentRowChanged(idx);
        }


    } else {
        QMessageBox::warning(this, "No Selection", "No item selected.");
    }
}


void EditingDialog::on_addButton_clicked()
{
    AddMemberDialog addDialog(this);
    if (addDialog.exec() == QDialog::Accepted) {
        auto obj = addDialog.getCreatedObject();
        group_copy.addMember(obj);
        ui->listWidget->addItem(obj->getName());
        ui->listWidget->setCurrentRow(ui->listWidget->count()-1);
    }
}


void EditingDialog::on_listWidget_currentRowChanged(int currentRow)
{
    if (currentRow != -1) {
        auto& obj = group_copy.getMembers()[currentRow];
        ui->name->show();
        ui->name->setText(obj->getName());
        ui->label->show();

        ui->age->show();
        ui->age->setText(obj->getAge());
        ui->label_2->show();

        ui->height->show();
        ui->height->setText(obj->getHeight());
        ui->label_3->show();

        ui->weight->show();
        ui->weight->setText(obj->getWeight());
        ui->label_4->show();

        ui->university->show();
        ui->label_5->show();

        ui->pass->show();
        ui->label_6->show();

        if (obj->getType() == "Human") {
            ui->university->hide();
            ui->label_5->hide();

            ui->pass->hide();
            ui->label_6->hide();
        } else {
            ui->university->show();
            ui->university->setText(obj->getUniversity());
            ui->label_5->show();

            ui->pass->show();
            ui->pass->setText(obj->getPass());
            ui->label_6->show();
        }
    } else {
        ui->name->hide();
        ui->label->hide();

        ui->age->hide();
        ui->label_2->hide();

        ui->height->hide();
        ui->label_3->hide();

        ui->weight->hide();
        ui->label_4->hide();

        ui->university->hide();
        ui->label_5->hide();

        ui->pass->hide();
        ui->label_6->hide();
    }
}


void EditingDialog::on_exitButton_clicked()
{
    close();
    smirnovMain->group = group_copy;
    smirnovMain->disp();
}

