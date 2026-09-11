#include<cstdio>
#include<algorithm>
using namespace std;
const int MAXN=200005;
const int LOG=18;
int par[MAXN][LOG];
int dep[MAXN];
int lca(int u,int v){
    if(dep[u]<dep[v])swap(u,v);
    int d=dep[u]-dep[v];
    for(int k=0;k<LOG;k++)if((d>>k)&1)u=par[u][k];
    if(u==v)return u;
    for(int k=LOG-1;k>=0;k--)if(par[u][k]!=par[v][k]){u=par[u][k];v=par[v][k];}
    return par[u][0];
}
int dist(int u,int v){return dep[u]+dep[v]-2*dep[lca(u,v)];}
int main(){
    int n;
    scanf("%d",&n);
    dep[1]=0;
    for(int k=0;k<LOG;k++)par[1][k]=1;
    int A=1,B=1,D=0;
    for(int i=1;i<=n;i++){
        int p;
        scanf("%d",&p);
        int v=i+1;
        dep[v]=dep[p]+1;
        par[v][0]=p;
        for(int k=1;k<LOG;k++)par[v][k]=par[par[v][k-1]][k-1];
        int dA=dist(v,A),dB=dist(v,B),mx=max(dA,dB);
        if(A==B){D=mx;B=v;}
        else if(mx>D){D=mx;if(dA>dB)B=v;else A=v;}
        else if(mx==D){printf("%d\n",i);return 0;}
    }
    printf("-1\n");
    return 0;
}
