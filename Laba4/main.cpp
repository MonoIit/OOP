#include "smirnovmain.h"
#include <QApplication>
#include <QStyleFactory>

void setLightTheme(QApplication &app) {
    QPalette lightPalette;
    lightPalette.setColor(QPalette::Window, QColor(255, 255, 255));
    lightPalette.setColor(QPalette::WindowText, Qt::black);
    lightPalette.setColor(QPalette::Base, QColor(240, 240, 240));
    lightPalette.setColor(QPalette::Text, Qt::black);
    lightPalette.setColor(QPalette::Button, QColor(240, 240, 240));
    lightPalette.setColor(QPalette::ButtonText, Qt::black);
    lightPalette.setColor(QPalette::Highlight, QColor(76, 163, 224));
    lightPalette.setColor(QPalette::HighlightedText, Qt::white);
    app.setPalette(lightPalette);
}

void setDarkTheme(QApplication &app) {
    QPalette darkPalette;
    darkPalette.setColor(QPalette::Window, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::WindowText, Qt::white);
    darkPalette.setColor(QPalette::Base, QColor(42, 42, 42));
    darkPalette.setColor(QPalette::Text, Qt::white);
    darkPalette.setColor(QPalette::Button, QColor(53, 53, 53));
    darkPalette.setColor(QPalette::ButtonText, Qt::white);
    darkPalette.setColor(QPalette::Highlight, QColor(142, 45, 197));
    darkPalette.setColor(QPalette::HighlightedText, Qt::black);
    app.setPalette(darkPalette);
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    SmirnovMain w;
    w.show();
    return a.exec();
}
