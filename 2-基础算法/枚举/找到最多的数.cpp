#include <iostream>
#include <map>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    map<int,int> mp;
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n*m; i++){
        int x;cin>>x;
        mp[x]++;
    }
    
    for(auto [x,y]: mp){
        if(2*y>n*m){
            cout << x << '\n';
        }
    }
    
    return 0;
}