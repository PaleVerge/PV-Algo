//
// Created by whip on 2026/9/10.
//
#include <iostream>
#include <vector>
using namespace std;
vector<int> vec;
signed main(){
    int n; cin>>n;
    if (n==0){
        cout<<0;
        return 0;
    }
    while (n){
        vec.push_back(n%8);
        n/=8;
    }
    for (int i=vec.size()-1;i>=0;i--){
        cout<<vec[i];
    }
    return 0;
}