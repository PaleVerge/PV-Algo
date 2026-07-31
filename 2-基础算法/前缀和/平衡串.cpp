#include <bits/stdc++.h>
using namespace std;
const int N=1000;
int prefix[N];

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string s;cin>>s;
    int n=s.size();
    prefix[0]=0;
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+(s[i-1]=='L'?1:-1);
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(prefix[j]-prefix[i-1]==0){
                ans=max(ans,j-i+1);
            }
        }
    }
    cout<<ans;
   
    return 0;
}