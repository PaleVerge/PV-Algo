//
// Created by whip on 2026/9/10.
//
#include <iostream>
#include <cmath>
using namespace std;
int days_in_moon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int cal_dur(int m_beg,int d_beg,int m_end,int d_end){
    if (m_beg == m_end){
        return d_end - d_beg;
    }
    int dur = 0;
    for (int i=m_beg;i<m_end;++i){
        dur += days_in_moon[i];
    }
    dur = dur - d_beg + d_end;
    return dur;
}
signed main(){
    int n; cin>>n;
    while (n--){
        int m_beg,d_beg,n,m_end,d_end;
        cin>>m_beg>>d_beg>>n>>m_end>>d_end;
        int dur = cal_dur(m_beg,d_beg,m_end,d_end);
        long ans = n*pow(2,dur);
        cout<<ans<<endl;
    }
}