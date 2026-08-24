//
// Created by whip on 2026/8/4.
//
#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

void solve() {
    int n;
    cin>>n;

    int base=0;
    int nonNegative=0;
    vector<int> neg;

    for(int i=0;i<n;i++){
        int w;
        cin>>w;
        if(w>=0){
            base+=w;
            nonNegative++;
        }else{
            neg.push_back(-w);
        }
    }
    sort(neg.begin(),neg.end(),greater<int>());
    int k=neg.size();
    vector<int> prefix(k+1,0);
    for(int i=0;i<k;i++){
        prefix[i+1]=prefix[i]+neg[i];
    }
    int best=0;
    for (int unflipped=0; unflipped<=k;unflipped++){
        int flipped=min(k-unflipped,nonNegative+unflipped);
        int gain=prefix[flipped]-(prefix[k]-prefix[k-unflipped]);
        best=max(best,gain);
    }
    cout<<base+best<<endl;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}