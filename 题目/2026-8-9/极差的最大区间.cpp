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
    int n;cin>>n;
    vector<int> a(n);
    int _max=0,_min=101;
    for (int i=0;i<n;++i){
        cin>>a[i];
        _max=max(_max,a[i]);
        _min=min(_min,a[i]);
    }
    cout<<1<<' '<<n<<' '<<_max-_min<<endl;
}
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;;
    while (t--){
        solve();
    }
    return 0;
}