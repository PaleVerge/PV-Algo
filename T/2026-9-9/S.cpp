//
// Created by whip on 2026/9/9.
//
//
// Created by whip on 2026/9/9.
//
#include <iostream>

using namespace std;

signed main(){
    int n; cin>>n;
    if (n%400==0 ||(n%4==0 && n%100!=0)){
        cout<<"Y";
    }else{
        cout<<"N";
    }
}
