//
// Created by whip on 2026/10/7.
//
#include <bits/stdc++.h>
#define int  long long
#define endl '\n'
#define sz(x) static_cast<int>((x).size())
using namespace std;

const int N=2e5+10;
const int INF=1e12+10;
const int MOD=1e9+7;
void solve(){
    int n; cin>>n;
    vector<int> v;
    while (n!=1){
        if (n%2==0){
            v.push_back(n);
            n/=2;
        }else{
            v.push_back(n);
            n=n*3+1;
        }
    }
    v.push_back(1);
    reverse(v.begin(),v.end());
    for (auto i:v){
        if (i==1)
            cout<<i;
        else
            cout<<" "<<i;
    }
}
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1;;
    while (t--){
        solve();
    }
    return 0;
}
