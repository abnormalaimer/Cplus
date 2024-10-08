//
// Created by 25149 on 24-7-26.
//

#include <iostream>
#include "fac2.h"
long factorial(long n){
    long ans=1;
    for (long i = 2; i <=n; ++i) {
        ans=ans*i;
        if (ans<0){
            return -1;
        }
    }
    return ans;
}
int main(){
    using namespace std;
    cout<<"please enter n:"<<flush;
    long n;
    cin>>n;
    if (n>=0){
        long nfact= factorial(n);
        if (nfact<0){
            cerr<<"overflow error:"
                <<n<<"is too big."<<endl;
        }
        else{
            cout<<"factorial("<<n<<")= "
                <<nfact<< endl;
        }
    } else{
        cerr<<"undefined: "
        <<"factorial of a negative number: "<<n<<endl;
    }
    return 0;
}