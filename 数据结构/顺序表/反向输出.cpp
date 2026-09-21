//
// Created by whip on 2026/9/19.
//
#include <iostream>
#include "SeqList.h"
using namespace std;


int main(){
    SeqList<char> L;
    char ch;
    while (cin.get(ch) && ch!='#'){
        L.insert(L.Length(),ch);
    }
    if (L.ishw())
        cout<<L.Length()<<endl;
    else
        cout<<"no";
}