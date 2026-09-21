//
// Created by whip on 2026/9/21.
//
#include <iostream>
#include "SeqList.h"
using namespace std;
int main(){
    SeqList<int> l;
    l.input();
    int n;cin>>n;
    l.huhuan(n);
    l.output();
}