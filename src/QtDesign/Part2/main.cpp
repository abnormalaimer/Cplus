#include <QCoreApplication>
#include <QDebug>
#include <iostream>

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    qDebug() << "Hello World";
    std::cout<<"hello"<<std::endl;
    return QCoreApplication::exec();
}
