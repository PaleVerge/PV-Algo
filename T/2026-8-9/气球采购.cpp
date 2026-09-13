//
// Created by whip on 2026/8/9.
//
#include <bits/stdc++.h>
#define int  long long
#define endl '\n'
using namespace std;

void solve(){
    int n,m;cin>>n>>m;
    vector<int> p(n),q(n),w(n);
    vector<int> r(n);
    int need=0;
    for (int i=0;i<n;i++){
        cin>>p[i]>>q[i]>>w[i];
        r[i]=((m*p[i])+q[i]-1)/q[i];
        if (w[i]<r[i])
            need+=(r[i]-w[i]);
    }
    cout<<need;
}
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;
    while (t--){
        solve();
    }
    return 0;
}