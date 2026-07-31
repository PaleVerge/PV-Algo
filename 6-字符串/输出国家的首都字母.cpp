//
// Created by ritno on 2026/3/22.
//

#include <iostream>
#include <string>
#include <map>
using namespace std;
map<string,string> mp;

int main(){
    //C++98不持支用{}直接初始化
    mp["Australia"] = "Canberra";
    mp["Belgium"]   = "Brussels";
    mp["China"]     = "Beijing";
    mp["Denmark"]   = "Copenhagen";
    mp["England"]   = "London";
    mp["France"]    = "Paris";
    mp["Greece"]    = "Athens";
    mp["Ireland"]   = "Dublin";
    mp["Scotland"]  = "Edinburgh";
    mp["Wales"]     = "Cardiff";

    int n;cin>>n;
    while (n--){
        string country;cin>>country;
        if (mp.count(country)){ //先判断是否存在
            cout<<mp[country]<<endl;
        }else{
            cout<<"Not found!"<<endl;
        }
    }
    return 0;
}