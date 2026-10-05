#include <bits/stdc++.h>
#define endl '\n'
#define sz(x) static_cast<int>((x).size())
using namespace std;

const int N=2e5+10;
const int INF=1e12+10;
const int MOD=1e9+7;
void solve(int n,int m){
    vector<int> v;
    for (int i=1;i<=n;++i){
        v.push_back(i);
    }
    int idx = 1;
    for (int i=0;sz(v)!=1;++i){
        if (idx==m){
            v.erase(v.begin()+i);
            idx=0;
            --i;
        }
        ++idx;
        if (i==sz(v)-1){
            i=-1;
        }
    }
    cout<<v.back()<<endl;
}
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    while (cin>>n>>m){
        if (n==0 && m==0)
            return 0;
        solve(n,m);
    }
    return 0;
}
