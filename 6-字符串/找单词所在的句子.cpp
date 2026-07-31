//
// Created by ritno on 2026/3/22.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
int main(){
    string s1[4]={  //几个字符串就定义为几
        " There is no reason for any individual to have a computer in their home.",
        " Computers are useless. They can only give you answers.",
        " To err is human, but to really foul things up requires a computer.",
        " The electronic computer is to individual privacy what the machine gun was to the horse cavalry."
    };
    string s;
    getline(cin,s);
    s=" "+s+" ";    //防止查找到子串

    transform(s.begin(),s.end(),s.begin(),::toupper);
    for (int i=0;i<4;i++){
        string copy=s1[i];
        transform(copy.begin(),copy.end(),copy.begin(),::toupper);  //将被查找单词转为大写
        for (int j=0;j<copy.size();++j) {   //将标点转化为空格
            if (ispunct(copy[j])) {
                copy[j] = ' ';
            }
        }
        if (copy.find(s)!=string::npos){    //若不返回npos，则输出
            cout<<s1[i]<<endl;
        }
    }
    return 0;
}