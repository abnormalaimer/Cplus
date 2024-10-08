//
// Created by 25149 on 2024/8/27.
//

#include "qstd.h"
QTextStream qstd::cout(stdout,QIODevice::WriteOnly);
QTextStream qstd::cin(stdin,QIODevice::ReadOnly);
QTextStream qstd::cerr(stderr,QIODevice::WriteOnly);

bool qstd::yes(QString qusetion) {
    QString ans;
    cout<<QString("%1 [y/n]?").arg(qusetion);
    cout.flush();
    ans=cin.readLine();
    return (ans.startsWith("y",Qt::CaseInsensitive));
}

void qstd::promptInputFile(QFile &infile) {

}

void qstd::promptOutputFile(QFile &outfile) {

}

double qstd::promptDouble() {
    return 0;
}

int qstd::promptInt(int base) {
    return 0;
}

bool qstd::more(QString prompt) {
    return false;
}
