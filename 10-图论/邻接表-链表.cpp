//
// Created by whip on 2026/7/28.
//
#include <bits/stdc++.h>
#define N 10000
#define M 10000

using namespace std;
struct Node{    //一个节点代表一条边
    Node *next; //当前边在链表的下一条边
    int where;  //当前边指向的点
}*head[N+1],a[2*M+1];
int m,n,l=0;
void AddEdge(int x,int y){
    a[++l].where=y;    // 第一条指向y的边
    a[l].next=head[x]; // 新边的 next 指向顶点 x 原本的第一条边（接上旧链表）
    head[x]=&a[l];     // 更新顶点 x 的头指针，使其指向这条新边（成为新链表头）
}


int main(){
    // 从 head[x] 开始，沿着 next 指针一直找，直到为空（nullptr）
    for (Node *p = head[x]; p != nullptr; p = p->next) {
        int v = p->where; // v 就是 x 的邻居节点
        // 对 v 进行操作...
    }
}

