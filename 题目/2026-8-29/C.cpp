#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    double c;
    scanf("%d%lf",&n,&c);
    vector<double>a(n+1),q(n+1),f(n+1,-1e300);
    for(int i=1;i<=n;i++)scanf("%lf",&a[i]);
    for(int i=1;i<=n;i++){
        double p;
        scanf("%lf",&p);
        q[i]=1-p/1000;
    }
    f[0]=0;
    for(int i=1;i<=n;i++)
        for(int j=i;j>=1;j--)
            f[j]=max(f[j],q[i]*(f[j-1]+a[i]));
    for(int k=0;k<=n;k++){
        double ans=0,r=1;
        for(int m=n;m>=k;m--){
            ans=max(ans,r*(c+f[m]/5));
            if(m>k)r=r*(m-k)/m;
        }
        printf("%.9f\n",ans);
    }
    return 0;
}
