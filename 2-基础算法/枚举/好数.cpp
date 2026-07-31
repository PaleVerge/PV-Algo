//
// Created by ritno on 2026/5/8.
//
#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n;cin>>n;
    int ans=0;
    for (int i=1;i<=n;i++){
        if ([](int x){
            for (int idx=1;x;idx^=1,x/=10){
                if (x%2!=idx) return false;
            }
            return true;
        }(i)) ans++;
    }
    cout<<ans<<endl;
    return 0;
}