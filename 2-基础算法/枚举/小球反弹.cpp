//
// Created by ritno on 2026/5/17.
//
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

int main(){
    const int width =343720,height=233333;
    int dx=15,dy=17;
    for (int t=1;;t++){
        if (dx*t%(width*2)==0 && dy*t%(height*2)==0){
            cout<<fixed<<setprecision(2)<<hypot(dx*t,dy*t);
            break;
        }
    }
    //int dt=lcm(dx,width)/dx;
    //for (int t=dt;;t+=dt){
    //  if (dx*t%(width*2)==0 && dy*t%(height*2)==0){
    //    cout<<fixed<<setprecision(2)<<hypot(dx*t,dy*t);
    //    break;
    //  }
    //}
    return 0;
}