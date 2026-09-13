//
// Created by whip on 2026/9/12.
//
#include <iostream>
#include <vector>
using namespace std;
vector<int> num;
signed main(){
    int d;
    while (1){
        cin>>d;
        if (d==0)
            return 0;
        int cnt = 0;
        int i=1;
        for (;i*(i+1)/2<=d;++i){
            cnt += i*i;
        }
        if (i*(i-1)/2<d){
            cnt += i*(d-i*(i-1)/2);
        }
        cout<<d<<' '<<cnt<<endl;
    }
}