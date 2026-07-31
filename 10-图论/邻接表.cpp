//
// Created by whip on 2026/7/28.
//
#include <bits/stdc++.h>
#define N 1e10+10
#define M 1e10+10

using namespace std;

vector<int> edge(N+1);
int n,m;
int main(){
    cin>>n>>m;
    for (int i=1;i<=m;++i){
        int x,y;cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    return 0;
}

