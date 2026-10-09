#include <bits/stdc++.h>
#define int  long long
#define endl '\n'
#define sz(x) static_cast<int>((x).size())
using namespace std;

const int N=2e5+10;
const int INF=1e12+10;
const int MOD=1e9+7;
void solve(){
    int w,x,h; cin>>w>>x>>h;
    int q; cin>>q;
    int ans=0;
    vector<vector<vector<bool>>> v(w+1,vector<vector<bool>>(x+1,vector<bool>(h+1,false)));
    while (q--){
        int x1,y1,z1,x2,y2,z2;
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        for (int i=x1;i<=x2;++i){
            for (int j=y1;j<=y2;++j){
                for (int k=z1;k<=z2;++k){
                    v[i][j][k]=true;
                }
            }
        }

    }
    for (int i=1;i<=w;++i){
        for (int j=1;j<=x;++j){
            for (int k=1;k<=h;++k){
                if (!v[i][j][k]) ans++;
            }
        }
    }
    cout<<ans;
}
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1;;
    while (t--){
        solve();
    }
    return 0;
}
