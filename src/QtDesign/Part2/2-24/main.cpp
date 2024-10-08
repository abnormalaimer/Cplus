#include <QCoreApplication>
#include <QDebug>
#include "thing.h"


void display(Thing t,int n){
int i;
for (int i = 0; i < n; ++i) {
    t.show();
}
}

int main() {
   QTextStream cout(stdout);
   Thing t1,t2;
   t1.set(23,'H');
   t2.set(1234,'w');
   t1.increment();
    display(t1,3);
    t2.show();
    return 0;
}
