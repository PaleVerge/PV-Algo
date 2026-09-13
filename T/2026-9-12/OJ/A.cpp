//
// Created by whip on 2026/9/12.
//
#include <iostream>
using namespace  std;
bool is(int n){
    if (n<2)
        return false;
    for (int i = 2; i * i <= n; ++i){
        if (n % i == 0)
            return false;
    }
    return true;
}
signed main(){
    int n;
    while (cin>>n){
        if (is(n))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

}