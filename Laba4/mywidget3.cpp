#include "mywidget3.h"


MyWidget3::MyWidget3(QWidget *parent)
    : QWidget(parent)
{

    QScrollArea *scrollArea = new QScrollArea(this);
    contentWidget = new ContentWidget();

    scrollArea->setWidget(contentWidget);
    scrollArea->setWidgetResizable(true);


    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(scrollArea);
}

void MyWidget3::displayAllObject(vector<shared_ptr<SmirnovHuman>>& members) {
    contentWidget->resetSizes();
    contentWidget->setObject(members);
    contentWidget->getMaxSizes();
    contentWidget->repaint();
}

void MyWidget3::clean(vector<shared_ptr<SmirnovHuman>>& members) {
    contentWidget->resetSizes();
    contentWidget->setObject(members);
    contentWidget->getMaxSizes();
    contentWidget->repaint();

}

