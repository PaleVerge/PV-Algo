//
// Created by whip on 2026/10/4.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m; cin>>n>>m;
    vector<int> v;
    for (int i=0;i<n;++i){
        int x; cin>>x;
        v.push_back(x);
    }
    while (m--){
        int op; cin>>op;
        switch (op){
        case 1:{
            int x; cin>>x;
            v.push_back(x);
            break;
        }
        case 2:{
            if (!v.empty()){
                v.pop_back();
            }
            break;
        }
        case 3:{
            int pos; cin>>pos;
            if (pos<v.size()){
                v.erase(v.begin()+pos);
            }
            break;
        }
        case 4:{
            int pos1,pos2; cin>>pos1>>pos2;
            pos1 = min(pos1,(int)v.size());
            pos2 = min(pos2,(int)v.size());
            if (pos1<pos2){
                v.erase(v.begin()+pos1,v.begin()+pos2);
            }

            break;
        }
        case 5:{
            cout<<v.size()<<endl;
            break;
        }
        case 6:{
            if (v.empty()){
                cout<<"none"<<endl;
            }else{
                cout<<v.back()<<endl;
            }
            break;
        }
        default:
            break;
        }
    }
}