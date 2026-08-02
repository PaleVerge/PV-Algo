//
// Created by whip on 2026/8/1.
//
#include <bits/stdc++.h>
#define int  long long

#define endl '\n'

using namespace std;

const int N=2e5+10;
const int INF=1e12+10;
const int MOD=1e9+7;
void init(){

}
int num_of_2(int x){
    int i,cnt=0;
    while (x){
        i=x%10;
        if (i==2){
            cnt++;
        }
        x/=10;
    }
    return cnt;
}
void solve(){
    int l,r;cin>>l>>r;
    int cnt=0;
    for (int i=l;i<=r;++i){
        cnt+=num_of_2(i);
    }
    cout<<cnt;
}
signed main(){
    init();
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;;
    while (t--){
        solve();
    }
    return 0;
}