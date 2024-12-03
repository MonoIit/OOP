/********************************************************************************
** Form generated from reading UI file 'smirnovmain.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMIRNOVMAIN_H
#define UI_SMIRNOVMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mywidget3.h"

QT_BEGIN_NAMESPACE

class Ui_SmirnovMain
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    MyWidget3 *widget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SmirnovMain)
    {
        if (SmirnovMain->objectName().isEmpty())
            SmirnovMain->setObjectName("SmirnovMain");
        SmirnovMain->resize(800, 562);
        actionOpen = new QAction(SmirnovMain);
        actionOpen->setObjectName("actionOpen");
        actionSave = new QAction(SmirnovMain);
        actionSave->setObjectName("actionSave");
        actionSave_As = new QAction(SmirnovMain);
        actionSave_As->setObjectName("actionSave_As");
        centralwidget = new QWidget(SmirnovMain);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        widget = new MyWidget3(centralwidget);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(166666, 166666));

        verticalLayout->addWidget(widget);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        SmirnovMain->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SmirnovMain);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        SmirnovMain->setMenuBar(menubar);
        statusbar = new QStatusBar(SmirnovMain);
        statusbar->setObjectName("statusbar");
        SmirnovMain->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);

        retranslateUi(SmirnovMain);

        QMetaObject::connectSlotsByName(SmirnovMain);
    } // setupUi

    void retranslateUi(QMainWindow *SmirnovMain)
    {
        SmirnovMain->setWindowTitle(QCoreApplication::translate("SmirnovMain", "SmirnovMain", nullptr));
        actionOpen->setText(QCoreApplication::translate("SmirnovMain", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("SmirnovMain", "Save", nullptr));
        actionSave_As->setText(QCoreApplication::translate("SmirnovMain", "Save As", nullptr));
        pushButton->setText(QCoreApplication::translate("SmirnovMain", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SmirnovMain", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", nullptr));
        menuFile->setTitle(QCoreApplication::translate("SmirnovMain", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmirnovMain: public Ui_SmirnovMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMIRNOVMAIN_H
