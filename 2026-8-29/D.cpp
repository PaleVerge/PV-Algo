#include<cstdio>
#include<vector>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    vector<int>p(n),L(n);
    for(int i=0;i<n;i++)scanf("%d",&p[i]);
    long long k=0;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(p[j]<p[i])L[i]++,k++;
    long long mx=1LL*n*(n-1)/2;
    if(k==0||k==mx){
        printf("-1\n");
        return 0;
    }
    int a=-1,b=-1;
    for(int i=0;i<n&&a<0;i++)
        for(int j=0;j<n;j++)
            if(i!=j&&L[i]>0&&L[j]<n-1-j){a=i;b=j;break;}
    L[a]--;
    L[b]++;
    vector<int>used(n+1,0);
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int v=1;v<=n;v++){
            if(used[v])continue;
            if(++cnt==L[i]+1){
                printf("%d%c",v,i==n-1?'\n':' ');
                used[v]=1;
                break;
            }
        }
    }
    return 0;
}
