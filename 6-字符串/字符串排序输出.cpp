//
// Created by ritno on 2026/3/18.
//
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,s[i]);
    }
    sort(s,s+3);
    for(int i=0;i<3;i++)
    {
        cout<<s[i]<<"\n";
    }

}