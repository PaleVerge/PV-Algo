//
// Created by whip on 2026/9/13.
//
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while (a){
        int r = a;
        a = b % a;
        b = r;
    }
    return b;
}
signed main(){
    int t,n; cin>>t;
    int ans;
    while (t--){
        cin>>n; int g[n];
        cin>>ans;
        for (int i=1;i<n;i++){
            cin>>g[i];
            ans = gcd(g[i],ans);
        }
        cout<<ans<<endl;
    }
}