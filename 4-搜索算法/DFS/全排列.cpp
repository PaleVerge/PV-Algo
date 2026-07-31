//
// Created by ritno on 2026/4/10.
//
#include <bits/stdc++.h>
using namespace std;
vector<int> a;
vector<bool> vis;  //用来表示数字i是否被使用过

void dfs(int dep,int n){
    if(dep==n+1){ //深度到达n+1,已经搜索完毕，直接输出结果
        for(int i=1;i<=n;++i)cout<<a[i]<<' ';
        cout<<endl;
        return ;
    }
    for(int i=1;i<=n;++i){ //枚举范围
        if(vis[i])continue; //排除不合法的路径

        vis[i]=true;//修改状态
        a[dep]=i;

        dfs(dep+1,n); //下一层

        vis[i]=false; //恢复现场
        //a[dep]=0;可以省略
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    int n;cin>>n;
    a.resize(n+1);
    vis.resize(n+1,false);
    dfs(1,n);
    return 0;
}