//
// Created by whip on 2026/9/22.
//
#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for (int i=0;i<n;i++){
        cin>>a[i];
        a.push_back(a[i]);
    }
    vector<int> b(n,0);
    for (int i=0;i<n;i++){
        for (int j=0;j<i;j++){
            if (a[i]>a[j]){
                b[i]++;
            }
        }
    }
    for (int i=0;i<n;i++){
        cout<<b[i]<<(i==n-1?"":" ");
    }
}
