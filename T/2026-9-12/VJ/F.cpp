//
// Created by whip on 2026/9/12.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

signed main(){
    int t; cin>>t;
    while (t--){
        int l,n; cin>>l>>n;
        vector<int> pos;
        for (int i=0;i<n;++i){
            int x;cin>>x;
            pos.push_back(x);
        }
        int max_t = 0, min_t = 0;
        for (int i=0;i<n;++i){
            max_t = max(max_t,max(pos[i],l-pos[i]));
            min_t = max(min_t,min(pos[i],l-pos[i]));
        }
        cout<<min_t<<' '<<max_t<<endl;
    }

}