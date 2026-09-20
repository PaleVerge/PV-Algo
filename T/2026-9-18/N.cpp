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
    int c=0,area=0;
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            if (s[i][j]<=50){
                area++;
                if (i==0 ||j==0 || i==n-1 || j==n-1){
                    c++;
                }else if(s[i+1][j]>50 || s[i][j+1]>50 ||s[i-1][j]>50 || s[i][j-1]>50){
                    c++;
                }
            }
        }
    }
    cout<<area<<" "<<c;
    return 0;
}