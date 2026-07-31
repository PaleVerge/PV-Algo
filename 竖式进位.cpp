//
// Created by whip on 2026/7/19.
//
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

const int N=1e10+10;
const int INF=1e12+10;
const int MOD=1e9+7;
void init(){

}
void solve(){
    string s1,s2;cin>>s1>>s2;

    int p1=s1.find('.');
    int p2=s2.find('.');

    string zs1=s1.substr(0,p1);
    string xs1=s1.substr(p1+1);
    string zs2=s2.substr(0,p2);
    string xs2=s2.substr(p2+1);

    int max_len=max(xs1.length(),xs2.length());
    while(xs1.length()<max_len)
        xs1+='0';
    while(xs2.length()<max_len)
        xs2+='0';

    while(zs1.length()<zs2.length())zs1='0'+zs1;
    while(zs2.length()<zs1.length())zs2='0'+zs2;

    string str1=zs1+xs1;
    string str2=zs2+xs2;

    int res=0;
    bool carry=false;

    for(int i=str1.length()-1;i>=0;--i){
        int n1=str1[i]-'0';
        int n2=str2[i]-'0';

        if(n1+n2+carry>=10){
            res++;
            carry=true;
        }else{
            carry=false;
        }
    }

    cout<<res<<endl;
}
int main() {
    init();
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t=1;
    while (t--){
        solve();
    }
    return 0;
}