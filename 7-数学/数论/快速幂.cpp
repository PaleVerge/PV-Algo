//
// Created by ritno on 2026/5/9.
//
#include <iostream>
using ll=long long;
const ll p = 1e9+7;

ll qmi(ll a,ll b,ll p){
    ll ans=1;
    while (b){
        if (b&1){
            ans=ans*a%p;
        }
        a=a*a%p,b>>=1;
    }
    return ans;
}
int main(){
    using std::cin,std::cout,std::endl;
    ll a,b;
    cout<<"请输入底数和指数:";
    cin>>a>>b;
    cout<<a<<"的"<<b<<"次方为:"<<qmi(a,b,p)<<endl;
}