//蓝桥152
#include<bits.stdc++.h>
using namespace std;

int main(){
    int n,a,b,c,ans=0;
    cin>>n>>a>>b>>c;
    
    for(int i=1;i<=n;i++){
        if(i%a==0||i%b==0||i%c==0){
            ans++;
        }
    }

    cout<<ans<<'\n';
    return 0;
}