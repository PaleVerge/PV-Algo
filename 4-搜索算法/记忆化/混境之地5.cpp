//
// Created by ritno on 2026/3/24.
//
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll N=1e3+7;

int n,m,k;
int sx,sy,fx,fy;
int h[N][N];

int dx[]={0,0,-1,-1};
int dy[]={-1,-1,0,0};

bool inmap(int x,int y){
    return 1<=x && x<=n && 1<=y && y<=m;
}

bool dfs(int x,int y,int t){    //返回能否到达终点，t表示当前喷皮背包的使用次数
    if (x==fx&&y==fy) return true;
    for (int  i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if (!inmap(nx,ny)){
            continue;
        }

        if (!t){
            if (h[x][y])
        }
    }
}
int main(){
    cin>>n>>m>>k>>sx>>sy>>fx>>fy;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin>>h[i][j];
        }
    }
    cout<<(dfs(sx,sy,0)?"Yes":"No")<<"\n";
    return 0;
}
