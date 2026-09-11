//
// Created by whip on 2026/7/29.
//

#include <bits/stdc++.h>
#define int long long

using namespace std;
vector<int> a;
signed main(){
    int n;cin>>n;
    int ans=0;
    for (int i=0;i<n;i++){
        int x;cin>>x;
        a.push_back(x);
    }
    if (n<=1){
        cout<<0;
        return 0;
    }
    sort(a.begin(),a.end());
    int tot=0;
    for (int i=0;i<n-1;++i){
        if (a[i]-tot>0){
            ans+=(a[i]-tot)*(n-i);
            tot+=(a[i]-tot);
        }
    }
    cout<<ans;
    return 0;
}