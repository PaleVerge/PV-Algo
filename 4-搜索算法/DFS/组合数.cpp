//
// Created by ritno on 2026/4/10.
//
#include <bits/stdc++.h>
using namespace std;
vector<int> com;
vector<vector<int>> ans;
void dfs(int dep,int n,int k){
    if (com.size()==k){
        ans.push_back(com);
        return ;
    }
    for (int i=1;i<=n;++i){
        com.push_back(i);
        dfs(dep+1,n,k);
        com.pop_back();
    }
}
int main(){
    int n,k;cin>>n>>k;
    dfs(1,n,k);
    for (int i=0;i<ans.size();++i){
        for (int j=0;j<ans[i].size();++j){
            cout<<ans[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}