//
// Created by ritno on 2026/3/18.
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool inword=false;
    string s;
    double count=0,tot=0;

    getline(cin,s);
    for (int i=0;i<s.length();i++){
        if (s[i]==' ' || s[i]==',' || s[i]=='.'){   //若当前字符是分隔符，则不在单词中
           inword=false;
        }else{  //若当前字符不是分隔符，则可能在或不在单词中
            tot++;  //字母总数增加
            if (!inword){   //若此前不在单词中，则单词数增加
                count++;
                inword=true;    //现在在单词中了
            }
        }
    }
    cout<<tot/count<<endl;
}