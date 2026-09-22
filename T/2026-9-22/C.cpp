//
// Created by whip on 2026/9/22.
//
#include <iostream>
#include <vector>

using namespace std;
int main(){
    int l,m; cin>>l>>m;
    vector<int> u,v;
    for (int i=0;i<m;++i){
        int x,y; cin>>x>>y;
        u.push_back(x);v.push_back(y);
    }
    vector<bool> move(l+1,false);
    for(int i=0;i<m;++i){
        for(int j=u[i];j<=v[i];++j)
            move[j]=true;
    }
    int ans=0;
    for(int i=0;i<=l;++i){
        if(!move[i])
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}