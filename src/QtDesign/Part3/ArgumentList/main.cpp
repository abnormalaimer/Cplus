#include <QCoreApplication>
#include <QDate>
#include "argumentlist.h"
void processFile(QString filename,bool verbose){
    if (verbose)
        qDebug()<<QString("Do something chatty with %1.").arg(filename);
    else
        qDebug()<<filename;
}
void runTestOnly(QStringList & listOfFiles,bool verbose){
    foreach(const QString &current,listOfFiles){
            processFile(current,verbose);
    }
}
int main(int argc,char *argv[]) {
ArgumentList a1(argc,argv);
QString appname=a1.takeFirst();
qDebug()<<"Running"<<appname;
bool verbose=a1.getSwitch("-v");
bool testing=a1.getSwitch("-t");
    if (testing){
        runTestOnly(a1,verbose);
        return 0;
    } else{
        qDebug()<<"This Is Not A Test";
    }
}
