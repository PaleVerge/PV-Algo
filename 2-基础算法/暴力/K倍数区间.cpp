//
// Created by ritno on 2026/4/7.
//
#include <bits/stdc++.h>

using namespace std;
const int N=1e5+5;
int prefix[N];
long long cnt[N];
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,k;
    long long count=0;
    cin>>n>>k;
    cnt[0]=1;
    for (int i=1;i<=n;++i){
        cin>>prefix[i];
        prefix[i]=(prefix[i]+prefix[i-1])%k;//记录当前余数
        count+=cnt[prefix[i]];//总数+=当前余数出现次数
        cnt[prefix[i]]++;//当前余数出现次数++
    }

    cout<<count;

    return 0;
}