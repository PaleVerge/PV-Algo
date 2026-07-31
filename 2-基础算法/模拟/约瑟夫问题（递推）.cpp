#include <iostream>

using namespace std;

int solve() {
    int n, m;
    cout << "请输入总人数 N 和报数跨度 M: ";
    if (!(cin >> n >> m)) return -1;

    int res = 0; // 0个人时（逻辑起点）
    for (int i = 2; i <= n; i++) {
        res = (res + m) % i;
    }

    cout << "最后留下的人编号是: " << res + 1 << endl;
    return 0;
}

int main() {
    solve();
    return 0;
}