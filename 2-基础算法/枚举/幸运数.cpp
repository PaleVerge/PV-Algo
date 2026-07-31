//
// Created by ritno on 2026/5/17.
//
#include <iostream>
using namespace std;
int digitcnt(int i){
    int count=0;
    while (i){
        count++;
        i/=10;
    }
    return count;
}
int digitcnt1(int n){
    int count=0;
    for (;n;n/=10){
        count++;
    }
    return count;
}
bool islucky(int n){
    int dcnt=digitcnt(n);

    if (dcnt&1)return false;

    int front=0,back=0,count=0;
    while (n){
        count++;
        int digit=n%10;
        if (count<=(dcnt>>1)) front+=digit;
        else back+=digit;
        n/=10;
    }
    if (back==front)return true;
    return false;
}
int main(){
    int count=0;
    for (int i=1;i<=100000000;++i){
        if (islucky(i)){
            count++;
        }
    }
    cout<<count;
    return 0;
}