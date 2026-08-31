#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    vector<int>a(n+1),d;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    printf("%lld ",(long long)abs(a[1]-a[n])+n-1);
    int lo=min(a[1],a[n]),hi=max(a[1],a[n]),sg=(a[1]<=a[n])?1:-1;
    for(int i=1;i<=n;i++){
        if(a[i]<lo||a[i]>hi)continue;
        int x=sg*a[i];
        auto it=upper_bound(d.begin(),d.end(),x);
        if(it==d.end())d.push_back(x);
        else*it=x;
    }
    printf("%d\n",(int)d.size()-1);
    return 0;
}
