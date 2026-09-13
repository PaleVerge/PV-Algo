//
// Created by whip on 2026/7/19.
//
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
const int N=2e5+10;
const int INF=1e12+10;
const int MOD=1e9+7;
using namespace std;
void init(){

}
void solve(){
    int n,m;cin>>n>>m;
    if (n==1&&m==1){
        cout<<1;
    }else if (n>1&&m>1){
        cout<<-1;
    }else if (m==1&&n>1){
        cout<<0<<'\n';
        for (int i=1;i<n;i++){
            cout<<1<<'\n';
        }
    }else{
        cout<<0;
        for (int i=1;i<m;i++){
            cout<<1;
        }
    }
}
signed main(){
    init();
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;
    while (t--){
        solve();
    }
    return 0;
}
