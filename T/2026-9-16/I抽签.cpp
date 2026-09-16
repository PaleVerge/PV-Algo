//
// Created by whip on 2026/9/16.
//
#include<iostream>
#include<vector>
using namespace std;
vector<int> vec;

int main(){
    int n; cin>>n;
    for (int i=0;i<n;i++){
        int x; cin>>x;
        vec.push_back(x);
    }
    int m; cin>>m;
    bool exist = false;
    for (auto i:vec){
        for (auto j:vec){
            for (auto k:vec){
                for (auto l:vec){
                    if (i+j+k+l==m){
                        exist = true;
                        break;
                    }
                }
            }
        }
    }
    if (exist)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
