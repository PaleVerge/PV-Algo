//
// Created by whip on 2026/7/19.
//
#include <bits/stdc++.h>
#define ll  long long

#define endl '\n'

using namespace std;

const int N=2e5+10;
const int INF=1e12+10;
const int MOD=1e9+7;

int main(){
    vector<int> v(3);
    for (int i=0;i<3;i++){
        cin>>v[i];
    }
    for (int i=0;i<3;i++){
        cout<<v[(i+1)%3]<<' ';//每个数字往后移动一位
        //数组重排且和原来每位都不同
    }
    cout<<endl;
    return 0;
}