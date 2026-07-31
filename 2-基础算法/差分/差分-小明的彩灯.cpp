//蓝桥
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N =5e5+7;

ll a[N],diff[N];

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,m;
    while(cin>>n>>m){
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }//读入数组
        for(int i=1;i<=n;i++){
            diff[i]=a[i]-a[i-1];
        }//差分
        while(m--){
            int l,r,x;cin>>l>>r>>x;
            diff[l]+=x;diff[r+1]-=x;//多次修改
        }
        for(int i=1;i<=n;i++){
            a[i]=a[i-1]+diff[i];//前缀和还原数组
        }

        for(int i=1;i<=n;i++){
            cout<<max(a[i],0ll)<<" \n"[i==n];//答案输出
             //字符串字面量的指针偏移
        }

    }
    return 0;
}