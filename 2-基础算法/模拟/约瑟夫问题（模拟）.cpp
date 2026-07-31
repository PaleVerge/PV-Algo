#include <iostream>
#include <vector>
#include <list>

using namespace std;

// 模拟法实现
int josephus_simulate(int n, int m) {
    list<int> players;
    for (int i = 1; i <= n; i++) players.push_back(i);

    auto it = players.begin();
    while (players.size() > 1) {
        // 报数 m-1 次（移动指针）
        for (int i = 0; i < m - 1; i++) {
            it++;
            if (it == players.end()) it = players.begin();
        }
        // 踢出当前报到 m 的人
        it = players.erase(it);
        if (it == players.end()) it = players.begin();
    }
    return players.front();
}