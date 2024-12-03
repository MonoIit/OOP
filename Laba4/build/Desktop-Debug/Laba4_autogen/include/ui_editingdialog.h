/********************************************************************************
** Form generated from reading UI file 'editingdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITINGDIALOG_H
#define UI_EDITINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditingDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *editButton;
    QPushButton *exitButton;
    QLineEdit *name;
    QLineEdit *height;
    QLineEdit *age;
    QLineEdit *weight;
    QLineEdit *university;
    QLineEdit *pass;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *EditingDialog)
    {
        if (EditingDialog->objectName().isEmpty())
            EditingDialog->setObjectName("EditingDialog");
        EditingDialog->resize(852, 420);
        verticalLayoutWidget = new QWidget(EditingDialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 531, 401));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(verticalLayoutWidget);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        addButton = new QPushButton(verticalLayoutWidget);
        addButton->setObjectName("addButton");

        horizontalLayout->addWidget(addButton);

        deleteButton = new QPushButton(verticalLayoutWidget);
        deleteButton->setObjectName("deleteButton");

        horizontalLayout->addWidget(deleteButton);

        editButton = new QPushButton(verticalLayoutWidget);
        editButton->setObjectName("editButton");

        horizontalLayout->addWidget(editButton);

        exitButton = new QPushButton(verticalLayoutWidget);
        exitButton->setObjectName("exitButton");

        horizontalLayout->addWidget(exitButton);


        verticalLayout->addLayout(horizontalLayout);

        name = new QLineEdit(EditingDialog);
        name->setObjectName("name");
        name->setEnabled(true);
        name->setGeometry(QRect(670, 80, 169, 26));
        name->setReadOnly(true);
        height = new QLineEdit(EditingDialog);
        height->setObjectName("height");
        height->setEnabled(true);
        height->setGeometry(QRect(670, 160, 169, 26));
        height->setReadOnly(true);
        age = new QLineEdit(EditingDialog);
        age->setObjectName("age");
        age->setEnabled(true);
        age->setGeometry(QRect(670, 120, 169, 26));
        age->setReadOnly(true);
        weight = new QLineEdit(EditingDialog);
        weight->setObjectName("weight");
        weight->setEnabled(true);
        weight->setGeometry(QRect(670, 200, 169, 26));
        weight->setReadOnly(true);
        university = new QLineEdit(EditingDialog);
        university->setObjectName("university");
        university->setEnabled(true);
        university->setGeometry(QRect(670, 240, 169, 26));
        university->setReadOnly(true);
        pass = new QLineEdit(EditingDialog);
        pass->setObjectName("pass");
        pass->setEnabled(true);
        pass->setGeometry(QRect(670, 280, 169, 26));
        pass->setReadOnly(true);
        label = new QLabel(EditingDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(560, 80, 61, 21));
        label_2 = new QLabel(EditingDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(560, 120, 61, 21));
        label_3 = new QLabel(EditingDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(560, 160, 61, 21));
        label_4 = new QLabel(EditingDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(560, 200, 61, 21));
        label_5 = new QLabel(EditingDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(560, 240, 101, 21));
        label_6 = new QLabel(EditingDialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(560, 280, 101, 21));

        retranslateUi(EditingDialog);

        QMetaObject::connectSlotsByName(EditingDialog);
    } // setupUi

    void retranslateUi(QWidget *EditingDialog)
    {
        EditingDialog->setWindowTitle(QCoreApplication::translate("EditingDialog", "Form", nullptr));
        addButton->setText(QCoreApplication::translate("EditingDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        deleteButton->setText(QCoreApplication::translate("EditingDialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        editButton->setText(QCoreApplication::translate("EditingDialog", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        exitButton->setText(QCoreApplication::translate("EditingDialog", "\320\236\320\232", nullptr));
        label->setText(QCoreApplication::translate("EditingDialog", "\320\230\320\274\321\217:", nullptr));
        label_2->setText(QCoreApplication::translate("EditingDialog", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202:", nullptr));
        label_3->setText(QCoreApplication::translate("EditingDialog", "\320\240\320\276\321\201\321\202:", nullptr));
        label_4->setText(QCoreApplication::translate("EditingDialog", "\320\222\320\265\321\201:", nullptr));
        label_5->setText(QCoreApplication::translate("EditingDialog", "\320\243\320\275\320\270\320\262\320\265\321\200\321\201\320\270\321\202\320\265\321\202:", nullptr));
        label_6->setText(QCoreApplication::translate("EditingDialog", "\320\237\321\200\320\276\320\277\321\203\321\201\320\272:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditingDialog: public Ui_EditingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITINGDIALOG_H
