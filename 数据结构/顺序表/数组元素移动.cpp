//
// Created by whip on 2026/9/21.
//
#include <iostream>
#include "SeqList.h"
using namespace std;
int main(){
    SeqList<int> l;
    int x;
    while (cin>>x){
        l.insert(l.Length(),x);
        if (cin.get()!=',')
            break;
    }
    l.oddeven();
    l.output2();
}