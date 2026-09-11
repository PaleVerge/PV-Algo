#include<bits/stdc++.h>

using namespace std;

const int MOD=998244353;
int f[100005];

int main(){
    int n;cin>>n;

    f[0]=0;
    for(int i=1;i<=n;i++){
        f[i]=1e9;
        for(int j=1;j*j<=i;j++){
            f[i]=min(f[i],f[i-j*j]+1);
        }
    }
    long long ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*f[i]%MOD;
    }
    cout<<ans<<endl;
    return 0;
}
