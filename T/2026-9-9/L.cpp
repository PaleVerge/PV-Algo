//
// Created by whip on 2026/9/10.
//
#include <iostream>
using namespace std;
int cal_m(double wbc,double rbc,int hgb,int hct,int plt){
    int cnt = 0;
    if (wbc<4 || wbc>10)
        cnt++;
    if (rbc<3.5 || rbc>5.5){
        cnt++;
    }
    if (hgb<120 || hgb>160){
        cnt++;
    }
    if (hct<42 || hct>48){
        cnt++;
    }
    if (plt<100 || plt>300){
        cnt++;
    }
    return cnt;
}
int cal_f(double wbc,double rbc,int hgb,int hct,int plt){
    int cnt = 0;
    if (wbc<4 || wbc>10)
        cnt++;
    if (rbc<3.5 || rbc>5.5){
        cnt++;
    }
    if (hgb<110 || hgb>150){
        cnt++;
    }
    if (hct<36 || hct>40){
        cnt++;
    }
    if (plt<100 || plt>300){
        cnt++;
    }
    return cnt;
}
signed main(){
    int k; cin>>k;
    while (k--){
        string sex; cin>>sex;
        double wbc,rbc; int hgb,hct,plt;

        cin>>wbc>>rbc>>hgb>>hct>>plt;
        if (sex[0]=='f'){
            int cnt=cal_f(wbc,rbc,hgb,hct,plt);
            if (cnt==0)
                cout<<"normal"<<endl;
            else
                cout<<cnt<<endl;
        }else if (sex[0]=='m'){
            int cnt=cal_m(wbc,rbc,hgb,hct,plt);
            if (cnt==0)
                cout<<"normal"<<endl;
            else
                cout<<cnt<<endl;
        }
    }
}