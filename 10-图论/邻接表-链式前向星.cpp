//
// Created by whip on 2026/7/28.
//
#include <bits/stdc++.h>
#define N 10000
#define M 10000

using namespace std;

int head[N + 1], where[2 * M + 1], next[2 * M + 1], l = 0;

void AddEdge(int x, int y) {
    where[++l] = y;
    next[l] = head[x];
    head[x] = l; // 存的是数组下标，而不是地址
}
int main(){
    // 遍历顶点 x 的所有邻居
    for (int i = head[x]; i != 0; i = next[i]) {
        int v = where[i]; // v 就是 x 连通的邻居节点
        // 进行你的处理逻辑...
    }
}
