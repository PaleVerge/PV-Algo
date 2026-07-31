#include <bits/stdc++.h>
using namespace std;

const int N = 20; // N皇后问题的最大规模
int n,ans=0;
int vis[N][N]; // vis[i][j]表示第i行第j列是否被皇后攻击

void dfs(int dep){
    if(dep>n){
        ans++;
        return ;
    }
    for(int i=1;i<=n;++i){
        if(vis[dep][i]) continue;
        for(int j=1;j<=n;++j) vis[j][i]++;

        for(int j=dep,k=i;j>=1&&k>=1;--j,--k) vis[j][k]++;
        for(int j=dep,k=i;j<=n&&k>=1;++j,--k) vis[j][k]++;
        for(int j=dep,k=i;j>=1&&k<=n;--j,++k) vis[j][k]++;
        for(int j=dep,k=i;j<=n&&k<=n;++j,++k) vis[j][k]++;

        dfs(dep+1);

        for(int j=1;j<=n;++j) vis[j][i]--;
        for(int j=dep,k=i;j>=1&&k>=1;--j,--k) vis[j][k]--;
        for(int j=dep,k=i;j<=n&&k>=1;++j,--k) vis[j][k]--;
        for(int j=dep,k=i;j>=1&&k<=n;--j,++k) vis[j][k]--;
        for(int j=dep,k=i;j<=n&&k<=n;++j,++k) vis[j][k]--;
    }

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin >> n;
    dfs(1);
    cout << ans << endl;
    return 0;
}