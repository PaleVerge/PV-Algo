//
// Created by whip on 2026/7/28.
//
#include <bits/stdc++.h>
using namespace std;

int a[N+1][N+1];

int main(){
    int m,n;cin>>m>>n;
    for (int i=1;i<=m;++i){
        int x,y;cin>>x>>y;
        a[x][y]=a[y][x]=1;//无向简单图
    }
    return 0;
}