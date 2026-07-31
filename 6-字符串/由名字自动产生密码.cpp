//
// Created by ritno on 2026/3/22.
//
#include <iostream>
#include <string>
using namespace std;
int main(){
    string first_name,last_name;
    getline(cin,first_name);
    getline(cin,last_name);
    string pwd="";  //字符串才能追加
    pwd+=first_name[0]; //字符串不能直接等于字符相加
    pwd+=first_name[first_name.size()/2];
    pwd+=first_name[first_name.size()-1];
    pwd+=last_name[0];
    pwd+=last_name[last_name.size()/2];
    pwd+=last_name[last_name.size()-1]; //注意防止数组越界，要size-1
    cout<<pwd<<endl;
    return 0;
}