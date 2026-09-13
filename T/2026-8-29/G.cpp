#include<cstdio>
#include<set>
using namespace std;
const int MAXN=500010;
int lch[MAXN],rch[MAXN],dep[MAXN],pos[MAXN],rev[MAXN],typ[MAXN],val[MAXN],stk[MAXN];
set<int>s[MAXN];
int main(){
    int n;
    scanf("%d",&n);
    int tot=1;
    for(int i=1;i<=n;i++){
        int t;
        scanf("%d",&t);
        typ[i]=t;
        if(t==1){
            int p;
            char c;
            scanf("%d %c",&p,&c);
            ++tot;
            if(c=='L')lch[p]=tot;
            else rch[p]=tot;
            dep[tot]=dep[p]+1;
            val[i]=tot;
        }else{
            scanf("%d",&val[i]);
        }
    }
    int top=0,timer=0,cur=1;
    while(cur||top){
        while(cur){
            stk[++top]=cur;
            cur=lch[cur];
        }
        cur=stk[top--];
        pos[cur]=++timer;
        rev[timer]=cur;
        cur=rch[cur];
    }
    s[0].insert(pos[1]);
    for(int i=1;i<=n;i++){
        if(typ[i]==1){
            int v=val[i];
            s[dep[v]].insert(pos[v]);
        }else{
            int x=val[i];
            set<int>::iterator it=s[dep[x]].upper_bound(pos[x]);
            if(it==s[dep[x]].end())puts("-1");
            else printf("%d\n",rev[*it]);
        }
    }
    return 0;
}
