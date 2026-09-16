//
// Created by whip on 2026/9/16.
//
#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    while (cin>>a>>b>>c){
        bool find = false;
        for (int i=10;i<100;++i){
            if (i%3==a && i%5==b &&i%7==c){
                cout<<i<<endl;
                find = true;
            }
        }
        if (!find) cout<<"No answer"<<endl;
    }

}