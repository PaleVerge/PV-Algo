//
// Created by whip on 2026/9/10.
//
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> vec;
signed main(){
    int n; cin>>n;
    if (n==0){
        cout<<0;
        return 0;
    }
    int ans = 0;
    while (n){
        vec.push_back(n%10);
        n/=10;
    }

    for (int i=0;i<vec.size();i++){
        ans += pow(8,i)*vec[i];
    }
    cout<<ans;
    return 0;
}