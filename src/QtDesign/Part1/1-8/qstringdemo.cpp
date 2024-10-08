
#include <QString>
#include <QTextStream>
QTextStream cout(stdout);
QTextStream cin(stdin);

int main(){
    QString s1("this "),s2("is a "),s3("string. ");
    s1+=s2;
    QString s4=s1+s3;
    cout<<s4<<Qt::endl;
    cout<<"thr length of that string is "<<s4.length()<<Qt::endl;
    cout<<"enter a sentence with white spaces: "<<Qt::endl;
    s2=cin.readLine();
    cout<<"here is your sentence :\n"<<s2<<Qt::endl;
    cout <<"the length of your sentence is :"<<s2.length()<<Qt::endl;
    return 0;
}
