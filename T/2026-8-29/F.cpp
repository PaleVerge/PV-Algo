#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    vector<vector<int>>g(n+1);
    vector<int>in(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        scanf("%d%d",&u,&v);
        g[u].push_back(v);
        in[v]++;
    }
    int k;
    scanf("%d",&k);
    vector<int>a(k),sp(n+1);
    for(int i=0;i<k;i++){
        scanf("%d",&a[i]);
        sp[a[i]]=1;
    }
    queue<int>q;
    for(int i=1;i<=n;i++)if(!sp[i]&&!in[i])q.push(i);
    vector<int>ans;
    ans.reserve(n);
    while(!q.empty()){
        int u=q.front();q.pop();
        ans.push_back(u);
        for(int v:g[u])if(--in[v]==0&&!sp[v])q.push(v);
    }
    for(int i=0;i<k;i++){
        if(in[a[i]]){
            printf("-1\n");
            return 0;
        }
        ans.push_back(a[i]);
        for(int v:g[a[i]])if(--in[v]==0&&!sp[v])q.push(v);
    }
    while(!q.empty()){
        int u=q.front();q.pop();
        ans.push_back(u);
        for(int v:g[u])if(--in[v]==0)q.push(v);
    }
    if((int)ans.size()!=n){
        printf("-1\n");
        return 0;
    }
    for(int i=0;i<n;i++)printf("%d%c",ans[i]," \n"[i==n-1]);
    return 0;
}
