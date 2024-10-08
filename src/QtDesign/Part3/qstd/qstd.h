//
// Created by 25149 on 2024/8/27.
//
#include <QTextStream>
#include <QFile>

#ifndef QTDESIGN_QSTD_H
#define QTDESIGN_QSTD_H


namespace qstd {
    extern QTextStream cout;
    extern QTextStream cin;
    extern QTextStream cerr;

    bool yes(QString yesNoQusetion);
    bool more(QString prompt);
    int promptInt(int base=10);
    double promptDouble();
    void promptOutputFile(QFile& outfile);
    void promptInputFile(QFile& infile);
};


#endif //QTDESIGN_QSTD_H
