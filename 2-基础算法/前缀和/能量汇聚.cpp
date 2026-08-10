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
const int MIN_INF = -1e15;
void solve(){
    int n;cin>>n;
    vector<int> E(n+1,0);
    for (int i=1;i<=n;++i) {
        cin>>E[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(2,MIN_INF));
    dp[0][1]=0;
    for (int i=1;i<=n;++i) {
        if(i-1>=0) {
            dp[i][0]=dp[i-1][1]+E[i];
        }
        if(i-2>=0) {
            dp[i][1]=max(dp[i-2][0],dp[i-2][1])+E[i];
        }
    }
    cout<<max(dp[n][0],dp[n][1])<<endl;
}
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;
    while (t--){
        solve();
    }
    return 0;
}