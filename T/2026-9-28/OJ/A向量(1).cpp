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
            case 1:
                int x; cin>>x;
                v.push_back(x);
                break;
            case 2:
                if (!v.empty()){
                    v.pop_back();
                }
                break;
            case 3:
                cout<<v.size()<<endl;
                break;
            case 4:
                if (v.empty()){
                    cout<<"none"<<endl;
                }else{
                    cout<<v.back()<<endl;
                }
                break;
            default:
                break;
        }
    }
}