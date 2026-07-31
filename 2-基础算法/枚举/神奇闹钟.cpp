//
// Created by whip on 2026/5/27.
//
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
vector<int> dayInMonth={0,31,28,31,30,31,30,31,31,30,31,30,31};

bool isleap(int y){
    return ((y%400==0 || (y%4==0&&y%100!=0))?true:false);
}

auto dateToTimestamp(int y,int m,int d,int h,int mm,int s){
    long long res=0;
    int sec_in_day=60*24*60;
    for (int i=1970;i<y;++i){
            res+=(365+isleap(i))*sec_in_day;
    }
    for (int i=1;i<m;++i){
        res+=(dayInMonth[i]+(isleap(y)&&i==2))*sec_in_day;
    }
    res+=(d-1)*sec_in_day;
    res+=(h*60*60+mm*60+s);
    return res;
}
auto timestampToDate(long long timestamp){
    int second_in_day=60*60*24;
    int s=timestamp % 60;
    int mm=timestamp % 3600/60;
    int h=timestamp % (second_in_day)/3600;
    int d=timestamp / second_in_day;
    int y=1970;
    int m=1;

    for (;;y++){
        int day_in_years=365+isleap(y);
        if (d>=day_in_years){
            d-=day_in_years;
        }else{
            break;
        }
    }
    for (;;m++){
        int day_in_months=dayInMonth[m]+(isleap(y)&&m==2);
        if (d>=day_in_months){
            d-=day_in_months;
        }else{
            break;
        }
    }
    d=d+1;

    cout<<y<<'-'<<setfill('0')<<setw(2)<<m
        <<'-'<<setw(2)<<d<<' '<<setw(2)<<h<<':'<<
            setw(2)<<mm<<':'<<setw(2)<<s<<endl;
}
int main(){
    int T;cin>>T;
    while (T--){
        int y,m,d,h,mm,s,x;
        char c;
        cin>>y>>c>>m>>c>>d>>h>>c>>mm>>c>>s>>x;
        x*=60;
        long long timeStamp=dateToTimestamp(y,m,d,h,mm,s);
        timeStamp=timeStamp/x*x;
        timestampToDate(timeStamp);
    }
    return 0;
}