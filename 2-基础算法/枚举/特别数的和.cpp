//蓝桥191
#include <bits/stdc++.h>
using namespace std;
bool invole(int x){
    while(x){
        int y=x%10;
        if(y==2||y==0||y==1||y==9){
            return true;
        }
        x/=10;
    }
    return false;
}
int main(){
    int n;cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        if(invole(i)){
            ans+=i;
        }
    }
    cout<<ans;
}
