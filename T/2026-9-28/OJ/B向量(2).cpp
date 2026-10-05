//
// Created by whip on 2026/10/4.
//
#include <iostream>
#include <vector>

using namespace std;
int main(){
    int m; cin>>m;
    vector<int> v;
    while (m--){
        int op; cin>>op;
        switch (op){
        case 1:{
            int x; cin>>x;
            v.push_back(x);
            break;
        }
        case 2:{
            int pos,x; cin>>pos>>x;
            int idx = min(int(v.size()),pos);
            v.insert(v.begin()+idx,x);
            break;
        }
        case 3:{
            int pos,x,n; cin>>pos>>n>>x;
            int idx = min(int(v.size()),pos);
            v.insert(v.begin()+idx,n,x);
            break;
        }
        case 4:{
            cout<<v.size()<<endl;
            break;
        }
        case 5:{
            if (v.empty()){
                cout<<"none"<<endl;
            }else{
                cout<<v.back()<<endl;
            }
            break;
        }
        case 6:{
            if (!v.empty()){
                v.pop_back();
            }
            break;
        }
        default:
            break;
        }
    }
}