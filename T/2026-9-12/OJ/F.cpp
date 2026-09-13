//
// Created by whip on 2026/9/13.
//
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while (a){
        int r = a;
        a = b % a;
        b = r;
    }
    return b;
}
signed main(){
    int a,b; cin>>a>>b;
    cout<<gcd(a,b)<<' '<<a/gcd(a,b)*b;
}