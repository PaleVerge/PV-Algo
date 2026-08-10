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
    vector<pair<int,int>> edges(n-1);
    vector<int> deg(n+1,0);
    for (int i=0;i<n-1;++i){
        cin>>edges[i].first>>edges[i].second;
        deg[edges[i].first]++;
        deg[edges[i].second]++;
    }
    vector<int> friends(n + 1, 0);
    for (int i=0;i<n-1;++i){
        int u=edges[i].first;
        int v=edges[i].second;
        friends[u]+=deg[v]-1;
        friends[v]+=deg[u]-1;
    }
    int max_friends=-1;
    int best_node=-1;
    for (int i=1; i<=n;++i){
        if (friends[i] >max_friends){
            max_friends = friends[i];
            best_node = i;
        }
    }
    cout<<best_node<<" "<<max_friends<<endl;
}
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;cin>>t;
    while (t--){
        solve();
    }
    return 0;
}
