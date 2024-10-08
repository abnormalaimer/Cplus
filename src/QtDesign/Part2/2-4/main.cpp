#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[]) {
   const int DASHES=30;
   QTextStream cout(stdout);
   {
      int i;
      for (int i = 0; i < DASHES; ++i)
         cout<<"=";
      cout<<Qt::endl;
      cout<<"i= "<<i<<Qt::endl;
   }


}
