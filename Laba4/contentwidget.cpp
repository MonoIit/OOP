#include "contentwidget.h"

ContentWidget::ContentWidget(QWidget *parent)
    : QWidget{parent}
{}

void ContentWidget::setObject(const std::vector<std::shared_ptr<SmirnovHuman>>& newObjects) {
    objects = newObjects;
}

void ContentWidget::resetSizes() {
    maxSizes.clear();
    maxSizes = { 0, 0, 0, 0, 0, 0 };
    maxHeight = 1;
    maxWidth = 1;
}

void ContentWidget::getMaxSizes() {
    QFont font("Arial", 25);
    QFontMetrics metrics(font);

    int textHeight;
    int textWidth;

    for (int i = 0; i < maxSizes.size(); ++i) {
        textWidth = metrics.horizontalAdvance(headers[i]);
        maxSizes[i] = max(maxSizes[i], textWidth + 20);
    }

    maxHeight = metrics.height();

    for (auto& curObj : objects) {
        vector<QString> data = {curObj->getName(), curObj->getAge(), curObj->getHeight(), curObj->getWeight(), curObj->getUniversity(), curObj->getPass()};
        for (int i = 0; i < maxSizes.size(); ++i) {
            textWidth = metrics.horizontalAdvance(data[i]);
            maxSizes[i] = max(maxSizes[i], textWidth + 20);
        }
    }


    maxWidth = max(maxWidth, maxSizes[0] + maxSizes[1] + maxSizes[2] + maxSizes[3] + maxSizes[4] + maxSizes[5] );
}

void ContentWidget::addNewObject(QPainter& painter, shared_ptr<SmirnovHuman> ptr) {
    auto& curObj = *ptr;


    vector<QString> data = {curObj.getName(), curObj.getAge(), curObj.getHeight(), curObj.getWeight(), curObj.getUniversity(), curObj.getPass()};


    int x = 1;
    for (int i = 0; i < maxSizes.size(); ++i) {
        QRect rect(x, y, maxSizes[i], maxHeight);
        painter.fillRect(rect, Qt::lightGray);
        painter.drawRect(rect);
        painter.drawText(rect, Qt::AlignCenter, data[i]);
        x += maxSizes[i];
    }


    y += maxHeight;
}

void ContentWidget::paintEvent(QPaintEvent *event) {
    QPainter painter(this);

    QFont font("Arial", 25);
    painter.setFont(font);
    painter.setPen(Qt::black);
    y = 0;

    int x = 1;
    for (int i = 0; i < maxSizes.size(); ++i) {
        QRect rect(x, y, maxSizes[i], maxHeight);
        painter.fillRect(rect, Qt::lightGray);
        painter.drawRect(rect);
        painter.drawText(rect, Qt::AlignCenter, headers[i]);
        x += maxSizes[i];
    }


    QFontMetrics metrics(font);
    y += metrics.height();
    maxHeight = metrics.height();

    for_each(objects.begin(), objects.end(), bind(&ContentWidget::addNewObject, this, ref(painter), placeholders::_1));

    setFixedSize(maxWidth, (int)(maxHeight + objects.size() * metrics.height()));
}
