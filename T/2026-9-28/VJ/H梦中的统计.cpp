#include <bits/stdc++.h>
#define int  long long
#define endl '\n'
#define sz(x) static_cast<int>((x).size())
using namespace std;

const int N=2e5+10;
const int INF=1e12+10;
const int MOD=1e9+7;
void solve(){
    int m,n; cin>>m>>n;
    vector<int> count(10,0);
    for (int i=m;i<=n;++i){
        int tmp = i;
        while(tmp){
            ++count[tmp%10];
            tmp/=10;
        }
    }
    for (int i=0;i<=9;++i){
        if (i) cout<<' ';
        cout<<count[i];
    }
    cout<<endl;
}
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1;;
    while (t--){
        solve();
    }
    return 0;
}
