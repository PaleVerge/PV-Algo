//
// Created by ritno on 2026/4/7.
//
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll x;cin>>x;
    string res="";
    while(x){
        x--;
        res+=(char)('A'+x%26);
        x/=26;
    }
    reverse(res.begin(),res.end());
    cout<<res<<endl;
    return 0;
}