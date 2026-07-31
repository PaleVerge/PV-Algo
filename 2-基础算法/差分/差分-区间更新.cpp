#include <bits/stdc++.h>
using namespace std;
const int N =1e5+7;

int a[N];
int diff[N];

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
            int x,y,z;cin>>x>>y>>z;
            diff[x]+=z;diff[y+1]-=z;//多次修改
        }
        for(int i=1;i<=n;i++){
            a[i]=a[i-1]+diff[i];//前缀和还原数组
        }

        for(int i=1;i<=n;i++){
             cout<<a[i]<<" \n"[i==n];//答案输出
             //字符串字面量的指针偏移
        }

    }
    return 0;
}