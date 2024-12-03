#ifndef ADDMEMBERDIALOG_H
#define ADDMEMBERDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QCloseEvent>
#include "student.h"

namespace Ui {
class AddMemberDialog;
}

class AddMemberDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddMemberDialog(QWidget *parent = nullptr);

    explicit AddMemberDialog(const shared_ptr<SmirnovHuman> obj, QWidget *parent = nullptr);
    ~AddMemberDialog();
    std::shared_ptr<SmirnovHuman> getCreatedObject() const;

    void setAllowClose(bool value) {
        allowClose = value;
    }

protected:
    // void closeEvent(QCloseEvent *event) override ;

    void accept() override;

private slots:
    void on_buttonBox_accepted();


    void on_comboBox_currentIndexChanged(int index);

private:
    std::shared_ptr<SmirnovHuman> createdObject;
    Ui::AddMemberDialog *ui;
    bool allowClose;
};

#endif // ADDMEMBERDIALOG_H
