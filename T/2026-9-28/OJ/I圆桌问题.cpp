#include <bits/stdc++.h>
#define int  long long
#define endl '\n'
#define sz(x) static_cast<int>((x).size())
using namespace std;

const int MAXN = 65535;
int n_bit;
int bit[MAXN+1];
void update(int i,int delta) {
    for (;i<=n_bit;i+=i&(-i))
        bit[i] += delta;
}
int query(int i) {
    int sum = 0;
    for (;i>0;i-=i&(-i))
        sum += bit[i];
    return sum;
}
int find_kth(int k) {
    int pos = 0;
    for (int i = 16;i>=0;i--) {
        int next_pos = pos+(1<<i);
        if (next_pos <= n_bit && bit[next_pos]<k) {
            k -= bit[next_pos];
            pos = next_pos;
        }
    }
    return pos + 1;
}
void solve(int n,int m){
    n_bit = 2*n;
    memset(bit,0,sizeof(bit));
    for (int i=1;i<=2*n;i++) {
        update(i,1);
    }
    vector<char> result(2*n,'G');
    int current_pos = 0;
    int remaining = 2*n;

    for (int i=0; i<n;i++) {
        int alive_before = query(current_pos);
        int target = alive_before + m;
        target = (target-1) % remaining + 1;

        int pos = find_kth(target);
        result[pos-1] = 'B';
        update(pos,-1);
        current_pos = pos;
        remaining--;
    }

    for (int i=0;i<2*n;i++) {
        if (i>0 && i%50==0) cout<<endl;
        cout<<result[i];
    }
    cout<<endl;
}
signed main(){
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    bool isfirst=true;
    while (cin>>n>>m){
        if (!isfirst)
            cout<<endl;
        isfirst=false;
        solve(n,m);
    }
    return 0;
}
