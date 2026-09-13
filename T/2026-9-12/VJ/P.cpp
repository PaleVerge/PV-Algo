//
// Created by whip on 2026/9/13.
//
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> vec;
signed main(){
    string n;
    while (cin>>n){
        if (n=="0")
            break;
        int ans = 0, idx = 1;
        for (int i=n.size()-1;i>=0;i--){
            int dig = n[i] - '0';
            ans+=(dig * (pow(2,idx)-1));
            idx++;
        }
        cout<<ans<<endl;
    }
    return 0;
}