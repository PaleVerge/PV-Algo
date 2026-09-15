//
// Created by whip on 2026/9/13.
//
#include <bits/stdc++.h>
using namespace std;
map<char,int> m1,m2;
vector<int> v1,v2;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    for (int i=0;i<s1.size();++i){
        m1[s1[i]]++;
        m2[s2[i]]++;
    }
    for (auto & x:m1){
        v1.push_back(x.second);
    }
    for (auto & x:m2){
        v2.push_back(x.second);
    }
    if (v1.size()!=v2.size()){
        cout<<"NO"<<endl;
        return 0;
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    for (int i=0;i<v1.size();++i){
        if (v1[i]!=v2[i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES";
}