#include<cstdio>
using namespace std;
typedef long long ll;
ll det3(ll a,ll b,ll c,ll d,ll e,ll f,ll g,ll h,ll i){
    return a*(e*i-f*h)-b*(d*i-f*g)+c*(d*h-e*g);
}
int x[105],y[105],c[105];
ll s[105];
int main(){
    int n;
    scanf("%d",&n);
    int m=0;
    for(int t=0;t<n;t++){
        int a,b;
        scanf("%d%d",&a,&b);
        int p=-1;
        for(int i=0;i<m;i++)
            if(x[i]==a&&y[i]==b){p=i;break;}
        if(p<0){x[m]=a;y[m]=b;c[m]=1;m++;}
        else c[p]++;
    }
    if(m<=2){
        printf("0\n");
        return 0;
    }
    int mx1=0,mx2=0;
    for(int i=0;i<m;i++){
        s[i]=(ll)x[i]*x[i]+(ll)y[i]*y[i];
        if(c[i]>=mx1){mx2=mx1;mx1=c[i];}
        else if(c[i]>mx2)mx2=c[i];
    }
    int best=mx1+mx2;
    for(int i=0;i<m;i++)
        for(int j=i+1;j<m;j++)
            for(int k=j+1;k<m;k++){
                ll a=det3(x[i],y[i],1,x[j],y[j],1,x[k],y[k],1);
                if(a==0)continue;
                ll b=det3(s[i],y[i],1,s[j],y[j],1,s[k],y[k],1);
                ll d=det3(s[i],x[i],1,s[j],x[j],1,s[k],x[k],1);
                ll e=det3(s[i],x[i],y[i],s[j],x[j],y[j],s[k],x[k],y[k]);
                int cur=0;
                for(int t=0;t<m;t++)
                    if(s[t]*a-x[t]*b+y[t]*d-e==0)cur+=c[t];
                if(cur>best)best=cur;
            }
    printf("%d\n",n-best);
    return 0;
}
