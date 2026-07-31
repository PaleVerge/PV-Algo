//
// Created by whip on 2026/7/19.
//
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--){
        int n,m;cin>>n>>m;
        int a[n];
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        int pos=0,neg=0,zero=0;
        for (int i=0;i<n;i++){
            if (a[i]>0){
                pos++;
            }else if (a[i]<0){
                neg++;
            }
        }
        zero=n-neg-pos;

        if(m==pos){
            cout<<0<<endl;
        }else if (m<pos){
            if (zero>0||neg>0) cout<<pos-m<<endl;
            else cout<<-1<<endl;
        }else{
            if (zero==0){
                if (pos>0){
                    if (neg>=m-pos) cout<<m-pos<<endl;
                    else cout<<-1<<endl;
                }else{
                    if (neg>=2&&m-pos<=neg-1) cout<<m-pos<<endl;
                    else cout<<-1<<endl;
                }
            }else{
                if (pos>0){
                    if (neg>=m-pos) cout<<m-pos<<endl;
                    else cout<<-1<<endl;
                }else{
                    if (neg>=2&&m-pos<=neg) cout<<m-pos<<endl;
                    else cout<<-1<<endl;
                }
            }
        }
    }
    return 0;
}