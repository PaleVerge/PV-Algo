//
// Created by whip on 2026/9/16.
//
#include<iostream>

using namespace std;

int main(){
    int m,n;
    while (cin>>m>>n){
        for (int i=n;i>=m;--i){
            if ((1500-i)%3==2 && (1500-i)%5==4 && (1500-i)%7==6){
                cout<<1500-i<<endl;
            }
        }
    }

}