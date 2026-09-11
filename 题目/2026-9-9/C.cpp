//
// Created by whip on 2026/9/9.
//
#include <iostream>

using namespace std;
int fib(int x){
    int x1=1,x2=1,x3;
    if (x==1 || x==2)
        return 1;
    for (int i=3;i<=x;++i){
        x3 = x1 + x2;
        x1 = x2;
        x2 = x3;
    }
    return x3;
}
signed main(){
    for (int i=1;i<=5;i++){
        if (i!=5)
            cout<<fib(i)<<" ";
        else
            cout<<fib(i);
    }
}
