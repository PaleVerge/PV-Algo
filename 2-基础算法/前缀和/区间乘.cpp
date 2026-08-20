//
// Created by whip on 2026/8/9.
//
#include <bits/stdc++.h>
#define int  long long
#define endl '\n'
using namespace std;

const int N=2e5+10;
const int INF=1e12+10;
const int MOD=1e9+7;

void solve(){
    int n,q;cin>>n>>q;
    vector<int> prefix(n);

    for(int i=0;i<n;i++){
        int x;cin>>x;
        prefix[i]=(i==0?x:prefix[i-1]*x);
    }
    while (q--){
        int x;cin>>x;
        bool find=false;
        for (int i=0;i<n;i++){
            for (int j=0;j<n-i;j++){
                int mul=[&](int l,int r){
                    if (l==0)return prefix[r];
                    return prefix[r]/prefix[l-1];
                };
                if (mul==x)find=true;
            }
        }
        if (find){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

}
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;cin>>t;
    while (t--){
        solve();
    }
    return 0;
}