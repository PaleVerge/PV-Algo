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
    vector<bool> isright(34,false);
    vector<int> ans(7,0);
    for (int i=0,x;i<7;++i){
        x; cin>>x;
        isright[x] = true;
    }

    while (n--){
        vector<int> v(7);
        int guess=0;
        for (auto &i:v){
            cin>>i;
            if (isright[i]){
                guess++;
            }
        }
        if (guess>=1)
            ++ans[7-guess];
    }

    for (int i=0;i<7;++i){
        if (i) cout<<" ";
        cout<<ans[i];
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
