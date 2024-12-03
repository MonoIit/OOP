#ifndef CONTENTWIDGET_H
#define CONTENTWIDGET_H

#include <QWidget>
#include <QPainter>
#include "pch.h"
#include "student.h"

class ContentWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ContentWidget(QWidget *parent = nullptr);
    void resetSizes();
    void setObject(const std::vector<std::shared_ptr<SmirnovHuman>>& newObjects);
    void addNewObject(QPainter& painter, shared_ptr<SmirnovHuman> ptr);
    void getMaxSizes();

protected:
    void paintEvent(QPaintEvent *event) override;

private:

    vector<QString> headers = {"Имя", "Возраст", "Рост", "Вес", "Университет", "Пропуск"};
    int y = 0;
    vector<int> maxSizes = {0, 0, 0, 0, 0, 0};
    int maxWidth = 1;
    int maxHeight = 1;
    float fontSize = 1.5;
    vector<shared_ptr<SmirnovHuman>> objects;


signals:
};

#endif // CONTENTWIDGET_H
