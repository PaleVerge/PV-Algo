//
// Created by whip on 2026/9/9.
//
//
// Created by whip on 2026/9/9.
//
#include <iostream>

using namespace std;

signed main(){
    int n; cin>>n;
    if (n>0)
        cout<<n*(n+1)/2;
    else
        cout<<-(n+1)*(n-2)/2;
}
