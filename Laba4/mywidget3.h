#pragma once

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QScrollArea>
#include <QFontMetrics>
#include <QPainter>
#include "pch.h"
#include "human.h"
#include "contentwidget.h"


class MyWidget3 : public QWidget
{
    Q_OBJECT

private:
    ContentWidget *contentWidget;

public:


    explicit MyWidget3(QWidget *parent = nullptr);

    void displayAllObject(vector<shared_ptr<SmirnovHuman>>& members);
    void saveToFile(const QString &filename);
    void loadFromFile(const QString &filename);
    void clean(vector<shared_ptr<SmirnovHuman>>& members);



signals:
};
