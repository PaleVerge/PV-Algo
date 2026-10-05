#include <bits/stdc++.h>
#define int  long long
#define endl '\n'
#define sz(x) static_cast<int>((x).size())
using namespace std;

const int N=2e5+10;
const int INF=1e12+10;
const int MOD=1e9+7;
void solve(){
    vector<int> a,b,c;
    int n1,n2;
    cin>>n1;
    for (int i=0;i<n1;++i){
        int x;cin>>x;
        a.push_back(x);
    }
    cin>>n2;
    for (int i=0;i<n2;++i){
        int x;cin>>x;
        b.push_back(x);
    }
    c=a;
    for (int i=0;i<n2;++i){
        c.push_back(b[ i]);
    }
    sort(c.begin(),c.end());
    c.erase(unique(c.begin(),c.end()),c.end());
    for (int i=0;i<sz(c);++i){
        cout<<c[i]<<(i!=sz(c)?" ":"");
    }
}
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1;;
    while (t--){
        solve();
    }
    return 0;
}
