//
// Created by ritno on 2026/3/18.
//
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int p[N];

int getprime(int n){
    int k=0;
    for (int i=2;i*i<=n;i++){
        if (n%i==0){    //记录n的质因子
            p[++k]=i;
            while (n%i==0){ //把n重复的质因子去掉
                n/=i;
            }
        }
    }
    if (n>1){
        p[++k]=n;   //若n没有被除尽，则n是个质数
    }
    return k;   //返回质因子的个数
}

int getphi(int n){
    int phi=n,k=getprime(n);
    for (int i=1;i<=k;i++){ //枚举所有质因子
        phi=phi-phi/p[i];   //等价于n*(1-1/p[1])*()...
    }
    return phi;
}
int main(){
    int ans=0;
    for (int i=1;i<=2020;i++){
        ans+=getphi(i);
    }
    cout<<ans*2-1<<endl;
    return 0;
}