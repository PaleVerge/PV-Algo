//
// Created by ritno on 2026/5/17.
//
#include <iostream>
using namespace std;
int main(){
    int n1=2021,ans=0;
    for (int i=0;n1>0;++i){
        for (int x=i;x;x/=10){
            if (x%10==1){
                if (n1==0)break;
                n1--;
            }
        }
        ans++;
    }
    cout<<ans-1<<endl;
}