//
// Created by whip on 2026/10/4.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    while (cin>>n){
        vector<int> v;
        for (int i=0;i<n;++i){
            int x;cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for (int i=1;i<v.size();++i){
            if (v[i]==v[i-1]){
                v.erase(v.begin()+i);
                --i;
            }
        }
        for (int i=0;i<static_cast<int>(v.size());++i){
            cout<<v[i]<<(i!=static_cast<int>(v.size())-1?" ":"\n");
        }
    }
}