//
// Created by whip on 2026/9/16.
//
#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;
vector<int> vec;

int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int x; cin>>x;
        vec.push_back(x);
    }
    int m; cin>>m;
    bool exist = false;
    vector<int> sum_2;
    for (auto i:vec){
        for (auto j:vec){
            sum_2.push_back(i+j);
        }
    }
    sort(sum_2.begin(),sum_2.end());
    int l = 0, r = sum_2.size()-1;
    while (l<=r){
        if (sum_2[l]+sum_2[r]==m){
            exist = true;
            break;
        }
        if (sum_2[l]+sum_2[r]<m)
            l++;
        else
            r--;
    }
    if (exist)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
