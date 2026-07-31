
//
// Created by ritno on 2026/4/9.
//

//LQ128
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n;cin>>n;
    ll maxn=n;
    for (int i=2;i<=n;++i){
        ll x=i;
        while (x!=1){
            if (x%2==0){
                x=x>>1;
            }else{
                x=3*x+1;
            }
            maxn=max(maxn,x);
        }
    }

    cout<<maxn;
    return 0;
}