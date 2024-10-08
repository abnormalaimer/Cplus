#include <QApplication>
#include <QPushButton>
#include <QMessageBox>
#include <QInputDialog>
#include <QTextStream>
//int main(int argc, char *argv[]) {
//    QApplication a(argc, argv);
//    QPushButton button("Hello world!", nullptr);
//    button.resize(200, 100);
//    button.show();
//    return QApplication::exec();
//}
//
//
//using namespace std;
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QTextStream cout(stdout);
    int answer = 0;
    do
    {
        int factArg = 0;
        int fact(1);
        factArg = QInputDialog::getInt(0, "factorial", "factorial of:", 1);
        cout << "user enter" << factArg ;
        int i = 2;
        while (i <= factArg)
        {
            fact = fact * i;
            ++i;
        }  
        QString response = QString("the fact of %1 is%2 .\n%3")
                .arg(factArg).arg(fact)
                .arg("do you want");
        answer = QMessageBox::question(0, "pay again?", response, QMessageBox::Yes | QMessageBox::No);

    } while (answer == QMessageBox::Yes);
    return EXIT_SUCCESS;

}