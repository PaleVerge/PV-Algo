//
// Created by whip on 2026/7/29.
//

#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
vector<int> a;
signed main(){
    int n,k;cin>>n>>k;
    for (int i=1;i<=n;i++){
        if (i==k)continue;
        cout<<k<<' '<<i<<endl;
    }
    return 0;
}