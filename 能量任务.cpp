//
// Created by whip on 2026/8/4.
//
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n;cin>>n;
    string s;cin>>s;

    int base=2*n+1;
    unordered_map<int,int> first;

    auto key=[&](int d1, int d2){
        return (d1+n)*base + (d2+n);
    };

    first[key(0,0)] = 0;
    int n0=0,n1=0,n2=0;
    int ans=0;
    for (int i=0;i<n;i++){
        if (s[i]=='0') n0++;
        else if (s[i]=='1') n1++;
        else n2++;

        int d1=n1-n0, d2=n2-n0;
        int k=key(d1,d2);
        auto it=first.find(k);
        if (it==first.end()) first[k]=i+1;
        else ans=max(ans, i+1-it->second);
    }
    cout<<ans;
    return 0;
}

