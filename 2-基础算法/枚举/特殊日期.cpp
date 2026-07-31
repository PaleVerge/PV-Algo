//
// Created by whip on 2026/5/27.
//
#include <iostream>
#include <vector>
using namespace std;
vector<int> dayInMonth={0,31,0,31,30,31,30,31,31,30,31,30,31};

bool israin(int year){
    if (year%400==0 || (year%4==0 && year%100!=0))
        return true;
    return false;
}
bool match(int year,int moon,int day){
    if (year%moon==0 && year%day==0)
        return true;
    return false;
}
int main(){
    //200000年1月1日符合，故从1开始
    int cnt=1;
    //枚举每个日期
    for (int i=2000;i<2000000;++i){
        if (israin(i)){
            dayInMonth[2]=29;
        }else{
            dayInMonth[2]=28;
        }
        for (int j=1;j<=12;++j){
            for (int k=1;k<=dayInMonth[j];++k){
                if (match(i,j,k)){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}