//
// Created by whip on 2026/8/24.
//
#include <bits/stdc++.h>
#define int  long long
#define endl '\n'
using namespace std;

const int N=1e5+10;
int max_val[N];

void init(){
    for(int x=0;x<=100000;++x){
        string s=to_string(x);
        int best=x;
        int len=s.size();
        for(int i=0;i<len;++i){
            for(int j=i+1;j<len;++j){
                swap(s[i],s[j]);
                best=max(best,stoll(s));
                swap(s[i],s[j]);
            }
        }
        max_val[x]=best;
    }
}
int get_max(int x){
    if(x<=100000)return max_val[x];
    string s=to_string(x);
    int best=x;
    int len=s.size();
    for(int i=0;i<len;++i){
        for(int j=i+1;j<len;++j){
            swap(s[i],s[j]);
            best=max(best,stoll(s));
            swap(s[i],s[j]);
        }
    }
    return best;
}
void solve(){
    int n;cin>>n;
    int ans=0;
    for(int i=0;i<n;++i){
        int a;cin>>a;
        ans+=get_max(a);
    }
    cout<<ans<<endl;
}
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    init();
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}



