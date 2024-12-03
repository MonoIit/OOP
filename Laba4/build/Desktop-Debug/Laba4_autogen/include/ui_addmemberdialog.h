/********************************************************************************
** Form generated from reading UI file 'addmemberdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEMBERDIALOG_H
#define UI_ADDMEMBERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddMemberDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *name;
    QLineEdit *age;
    QLineEdit *height;
    QLineEdit *weight;
    QLineEdit *university;
    QLineEdit *pass;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *AddMemberDialog)
    {
        if (AddMemberDialog->objectName().isEmpty())
            AddMemberDialog->setObjectName("AddMemberDialog");
        AddMemberDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(AddMemberDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        name = new QLineEdit(AddMemberDialog);
        name->setObjectName("name");
        name->setGeometry(QRect(130, 50, 113, 26));
        age = new QLineEdit(AddMemberDialog);
        age->setObjectName("age");
        age->setGeometry(QRect(130, 80, 113, 26));
        height = new QLineEdit(AddMemberDialog);
        height->setObjectName("height");
        height->setGeometry(QRect(130, 110, 113, 26));
        weight = new QLineEdit(AddMemberDialog);
        weight->setObjectName("weight");
        weight->setGeometry(QRect(130, 140, 113, 26));
        university = new QLineEdit(AddMemberDialog);
        university->setObjectName("university");
        university->setGeometry(QRect(130, 170, 113, 26));
        pass = new QLineEdit(AddMemberDialog);
        pass->setObjectName("pass");
        pass->setGeometry(QRect(130, 200, 113, 26));
        comboBox = new QComboBox(AddMemberDialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(140, 10, 86, 26));
        label_3 = new QLabel(AddMemberDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 110, 61, 21));
        label_5 = new QLabel(AddMemberDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 170, 101, 21));
        label_4 = new QLabel(AddMemberDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 140, 61, 21));
        label_6 = new QLabel(AddMemberDialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 200, 101, 21));
        label_2 = new QLabel(AddMemberDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 80, 61, 21));
        label = new QLabel(AddMemberDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 50, 61, 21));

        retranslateUi(AddMemberDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AddMemberDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AddMemberDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddMemberDialog);
    } // setupUi

    void retranslateUi(QDialog *AddMemberDialog)
    {
        AddMemberDialog->setWindowTitle(QCoreApplication::translate("AddMemberDialog", "Dialog", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("AddMemberDialog", "Human", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("AddMemberDialog", "Student", nullptr));

        label_3->setText(QCoreApplication::translate("AddMemberDialog", "\320\240\320\276\321\201\321\202:", nullptr));
        label_5->setText(QCoreApplication::translate("AddMemberDialog", "\320\243\320\275\320\270\320\262\320\265\321\200\321\201\320\270\321\202\320\265\321\202:", nullptr));
        label_4->setText(QCoreApplication::translate("AddMemberDialog", "\320\222\320\265\321\201:", nullptr));
        label_6->setText(QCoreApplication::translate("AddMemberDialog", "\320\237\321\200\320\276\320\277\321\203\321\201\320\272:", nullptr));
        label_2->setText(QCoreApplication::translate("AddMemberDialog", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202:", nullptr));
        label->setText(QCoreApplication::translate("AddMemberDialog", "\320\230\320\274\321\217:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddMemberDialog: public Ui_AddMemberDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMBERDIALOG_H
