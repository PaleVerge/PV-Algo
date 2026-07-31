//
// Created by ritno on 2026/1/31.
//
#include<bits/stdc++.h>
using namespace std;
int count2(int n) {
    int count=0;
    while (n!=0) {
        int a=n%10;
        if (a==2) {
            count++;
        }
        n=n/10;
    }
    return count;
}
int main() {
    int tot=0;
    for (int i=1;i<=2020;i++) {
        tot+=count2(i);
    }
    printf("%d",tot);
    return 0;
}