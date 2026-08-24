//
// Created by whip on 2026/8/4.
//

#include <bits/stdc++.h>
#define int  long long
#define endl '\n'
using namespace std;

void solve(){
    string s;cin>>s;
    int n=0,cnt=0;
    if (s.size()<2)
        n=s[0]-'0';
    else{
        for (char c:s){
            n+=(c-'0');
        }
        cnt++;
    }
    while (n>=10){
        int tot=0;
        while (n){
            tot+=n%10;
            n/=10;
        }
        n=tot;
        cnt++;
    }
    cout<<cnt<<' '<<n<<endl;
}
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;cin>>t;
    while (t--){
        solve();
    }
    return 0;
}