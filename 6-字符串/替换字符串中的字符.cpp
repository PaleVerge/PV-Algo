//
// Created by ritno on 2026/3/22.
//
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;cin>>n;
    while (n--){
        string s;getline(cin,s,'#');       //第三个参数为截止符
        for (int i=0;i<s.size();++i){
            if (s[i]==' '){
                s[i]='@';
            }
            cout<<s[i];
        }
        cout<<endl;
    }
}