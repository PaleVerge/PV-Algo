//
// Created by whip on 2026/9/10.
//
#include <iostream>

using namespace std;
int days_in_month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
bool isleap(int y){
    if (y%400==0 ||(y%4==0&&y%100!=0))
        return true;
    return false;
}
signed main(){
    int y,m,d;
    char c;
    while (cin>>y>>c>>m>>c>>d){
        if (isleap(y))
            days_in_month[2]=29;
        else{
            days_in_month[2]=28;
        }
        int ans = 0;
        for (int i=1;i<m;++i){
            ans += days_in_month[i];
        }
        ans += d;
        cout<<ans<<endl;
    }
}