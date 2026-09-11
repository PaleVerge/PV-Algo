//
// Created by ritno on 2026/3/29.
//
#include <iostream>
using namespace std;
const int N=25;

void findnum(int a[],int n,int x,int &idx){
    for (int i=0;i<n;i++){
        if (a[i]==x){
            idx=i;
            return ;
        }
    }
    idx=-1;
}
int main(){
    int n;cin>>n;
    int a[N];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;cin>>x;
    int idx=-1;
    findnum(a,n,x,idx);
    cout<<idx<<endl;
    return 0;
}