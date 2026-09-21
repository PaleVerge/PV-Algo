//
// Created by whip on 2026/9/21.
//
#include <iostream>
#include "SeqList.h"
using namespace std;
template<class T>
bool delet(SeqList<T> &l,int s,int t){
    if (s>t){
        cout<<"s or t error!";
        return false;
    }
    int val = 0;
    for (int i=0;i<l.Length();++i){
        l.getData(i,val);
        if (val>=s && val<=t){
            l.remove(i);
            --i;
        }
    }
    return true;
}
int main(){
    SeqList<int> l;
    l.input();
    int s,t; cin>>s>>t;
    bool res = delet(l,s,t);
    if (res)
        l.output();
}