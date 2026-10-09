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
    vector<vector<int>> a(n);
    for(int i=0;i<n;++i) {
        a[i].assign(i+1,1);
        for(int j=1;j<i;++j)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        for(int j=0;j<=i;++j) {
            if(j) cout << ' ';
            cout<<a[i][j];
        }
        cout<<endl;
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
