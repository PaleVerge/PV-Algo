//
// Created by whip on 2026/7/23.
//
//
// Created by whip on 2026/7/23.
//
//
// Created by whip on 2026/7/19.
//
#include <bits/stdc++.h>
#define int  long long

#define endl '\n'

using namespace std;

const int N=2e5+10;
const int INF=1e12+10;
const int MOD=1e9+7;
int num[N],prefix[N],suf[N];
void init(){

}
void solve(){
    int n,sum=0,ans=0;
    vector<int> v;
    cin>>n;

    for (int i=1;i<=n;i++){
        cin>>num[i],sum=num[i]^sum;
    }
    for (int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]^num[i];
    }
    for (int i=n;i;i--){
        suf[i]=suf[i+1]^num[i];
        if (suf[i]==sum && i!=1){
            v.push_back(i);
        }
    }
    reverse(v.begin(),v.end());
    if(v.size()==0){
        cout<<0<<endl;
        return;
    }
    for(int i=1;i<n;i++){
        if(prefix[i]!=sum) continue;
        ans+=v.size()-(upper_bound(v.begin(),v.end(),i+1)-v.begin());
    }
    cout<<ans<<endl;
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