//
// Created by ritno on 2026/3/24.
//
#include <cstdlib>
#include <iostream>
using namespace std;
#define OK 1
#define ERROR 0
#define LIST_INIT_SIZE 100
#define LISTINCREMENT  10
typedef char ElemType;
typedef int Status;

typedef struct
{
    ElemType* elem;
    int length;
    int listsize;
} SqList;
// 算法2.3  初始化
Status InitList_Sq(SqList& L){
    L.elem = (ElemType*)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    L.length = 0;
    L.listsize = LIST_INIT_SIZE;
    return OK;
}
// 算法2.4  插入
Status ListInsert_Sq(SqList& L, int i, ElemType e) {
    if (i < 1 || i > L.length + 1) return ERROR;

    ElemType* q = &L.elem[i - 1];
    for (ElemType* p = &L.elem[L.length - 1]; p >= q; --p) {
        *(p + 1) = *p;
    }
    *q = e;
    L.length++;
    return OK;
}
//算法2.5 删除
Status ListDelete_Sq(SqList& L, int i, ElemType& e){
    if (i < 1 || i > L.length) return ERROR;

    ElemType* p = &L.elem[i - 1];
    e = *p;

    ElemType* q = &L.elem[L.length - 1];
    for (++p; p <= q; ++p) {
        *(p - 1) = *p;
    }
    L.length--;
    return OK;
}
//销毁顺序表操作
Status DestroyList(SqList& L){
    free(L.elem);
    L.elem = NULL;
    L.length = 0;
    L.listsize = 0;
    return OK;
}
Status ListEmpty(SqList L){
    return L.length == 0 ? 1 : 0;
}
int	main(){
    char A[5] = { 'a','b','c','d','e' }, temp = 'f';
    //temp用来存放插入的字符以及保存删除字符的值
    int	i;

    SqList	List;
    InitList_Sq(List);

    for (i = 1; i <= 5; i++)
        ListInsert_Sq(List, i, A[i - 1]);

    if (!ListEmpty(List))
        cout << "顺序表非空\n";

    cout << "开始时元素序列为：\n";
    for (i = 1; i <= List.length; i++)
        cout << List.elem[i - 1];

    i = 4;   //插入位置
    ListInsert_Sq(List, i, temp);
    cout << "\n插入后的元素序列为：\n";
    for (i = 1; i <= List.length; i++)
        cout << List.elem[i - 1];

    i = 3;
    ListDelete_Sq(List, i, temp);
    cout << "\n删除后的元素序列为：\n";
    for (i = 1; i <= List.length; i++)
        cout << List.elem[i - 1];

    if (DestroyList(List))
        cout << "\n成功释放顺序表L";
    return 0;
}