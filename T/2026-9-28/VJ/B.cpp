//
// Created by whip on 2026/10/4.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    int x;
    while (cin>>x && x!=0){
        v.push_back(x);
    }
    reverse(v.begin(),v.end());
    for (auto x : v){
        cout<<x<<" ";
       }
}