//
// Created by 25149 on 24-7-28.
//
#include <iostream>
#include <sstream>
#include <fstream>
int main(){
    using namespace std;
   ostringstream strbuf;
int lucky=7;
   float pi=3.14;
   double e=2.71;
cout<<"an in-memory"<<endl;
strbuf<<"luckymember: "<<lucky<<endl
    <<"pi: "<<pi<<endl
    <<"e: "<<e<<endl;
string strval=strbuf.str();
cout<<strval;

ofstream outf;
outf.open("./mydata");
outf<<strval;
outf.close();

cout<<"read data from the file exists before attempting to read"<<endl;
string newstr;
ifstream inf;
inf.open("./mydata");
    if (inf) {
        cout<<"open right"<<endl;
        int lucky2;
        inf >> newstr >> lucky2;
        if (lucky != lucky2)
            cerr << "error wrong " << newstr<<lucky2<<endl;
        else
            cout<<newstr<<"OK"<<lucky2<<endl;

    float pi2;
    inf>>newstr>>pi2;
        if (pi2!=pi)
            cerr << "error wrong " << newstr<<pi2<<endl;
        else
            cout<<newstr<<"OK"<<endl;
    double e2;
        inf>>newstr>>e2;
        if (e2!=e)
            cerr << "error wrong " << newstr<<e2<<endl;
        else
            cout<<newstr<<"OK "<<endl;
        inf.close();


        cout<<"read line"<<endl;
        inf.open("./mydata");
        if (inf){
            while (not inf.eof()){
                getline(inf,newstr);
                cout<<newstr<<endl;
            }
            inf.close();
        }
        return 0;

    }

}
