//
// Created by whip on 2026/9/22.
//
#include <iostream>
#include <vector>

using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    while (cin>>n){
        vector<int> a(n),ans(n,0),freq(1001,0);

        for (int &x:a) cin>>x;

        for (int i = 0; i < n; ++i) {
            for (int x = 0; x < a[i]; ++x)
                ans[i] += freq[x];
            ++freq[a[i]];
        }

        for (int i=0;i<n;i++){
            cout<<ans[i]<<(i==n-1?"\n":" ");
        }
    }
}