#include <bits/stdc++.h>
#define int  long long
#define endl '\n'
#define sz(x) static_cast<int>((x).size())
using namespace std;

const int N=2e5+10;
const int INF=1e12+10;
const int MOD=1e9+7;
void solve(){
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    int top=0,bottom=n-1,left=0,right =n-1;
    int value = 1;
    while(top<=bottom && left<=right){
        for(int j=left;j<=right;++j){
            a[top][j]=value;
            value++;
        }

        ++top;
        for(int i=top;i<= bottom;++i){
            a[i][right] = value;
            value++;
        }

        --right;
        if(top<=bottom) {
            for(int j=right;j>=left;--j){
                a[bottom][j] = value;
                value++;
            }
            --bottom;
        }
        if(left<=right) {
            for(int i=bottom;i>=top;--i){
                a[i][left] = value;
                value++;
            }
            ++left;
        }
    }
    for (int i=0;i<n;++i) {
        for (int j=0;j<n;++j) {

            cout<<setw(3)<<a[i][j];
        }
        cout<<endl;
    }
}
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    while (t--){
        solve();
    }
    return 0;
}
