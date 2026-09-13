//
// Created by whip on 2026/9/13.
//
#include <bits/stdc++.h>
using namespace std;
int s[1000][1000];
int main(){
    int n; cin>>n;
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            cin>>s[i][j];
        }
    }
    int w=0,h=0;
    bool find = false;
    for (int i=0;i<n&&!find;++i){
        for (int j=0;j<n;++j){
            if (s[i][j]==0){
                w++;
                find=true;
            }
        }
    }
    find = false;
    for (int j=0;j<n&&!find;++j){
        for (int i=0;i<n;++i){
            if (s[i][j]==0){
                h++;
                find=true;
            }
        }
    }
    if(w<2||h<2)
        cout<<0<<endl;
    else
        cout<<(w-2)*(h-2)<<endl;
    return 0;
}