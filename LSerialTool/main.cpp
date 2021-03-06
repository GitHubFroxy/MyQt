﻿#include "widget.h"
#include <QApplication>

#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTextCodec *code = QTextCodec::codecForName("UTF-8");
#if (QT_VERSION <= QT_VERSION_CHECK(5,0,0))
    QTextCodec::setCodecForLocale(code);
    QTextCodec::setCodecForCStrings(code);
    QTextCodec::setCodecForTr(code);
#else
    QTextCodec::setCodecForLocale(code);
    QTextCodec::setCodecForCStrings(code);
    QTextCodec::setCodecForTr(code);
#endif

    Widget w;
    w.show();

    return a.exec();
}
