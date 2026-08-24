//
// Created by whip on 2026/8/24.
//
#include <bits/stdc++.h>
#define int long long int
#define endl '\n'
using namespace std;

void solve(){
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    cout<<x1+x2-x3<<' '<<y1+y2-y3<<endl;
}
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
}