//
// Created by whip on 2026/9/9.
//
#include <iostream>

using namespace std;
signed main(){
    double sum = 0;
    for (int i=0;i<12;i++){
        double a; cin>>a;
        sum += a;
    }
    cout<<"$"<<sum/12;
}