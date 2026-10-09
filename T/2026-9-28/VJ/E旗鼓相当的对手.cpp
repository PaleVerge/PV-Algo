#include <bits/stdc++.h>
#define int  long long
#define endl '\n'
#define sz(x) static_cast<int>((x).size())
using namespace std;

const int N=2e5+10;
const int INF=1e12+10;
const int MOD=1e9+7;
void solve(){
    int n; cin>>n;
    vector<array<int,4> > v(n);
    int ch,ma,en;
    for (int i=0;i<n;++i){
        cin>>v[i][0]>>v[i][1]>>v[i][2];
        v[i][3] = v[i][0]+v[i][1]+v[i][2];
    }
    int ans=0;
    for (int i=0;i<n;++i){
        for (int j=i+1;j<n;++j){
            if (abs(v[i][0]-v[j][0])<=5 &&
                abs(v[i][1]-v[j][1])<=5 &&
                abs(v[i][2]-v[j][2])<=5 &&
                abs(v[i][3]-v[j][3])<=10){
                ans++;
            }
        }
    }
    cout<<ans;
}
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    while (t--){
        solve();
    }
    return 0;
}
