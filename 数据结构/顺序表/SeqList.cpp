//
// Created by whip on 2026/9/19.
//
#include <iostream>
using namespace std;
int defaultSize = 100;
template<typename T>
class SeqList{
public:
    SeqList(int sz = defaultSize);
    SeqList(const SeqList<T>& L);
    ~SeqList();
    int Size()const;
    int Length();
    int Locate(int index)const;
    int Search(T &x)const;
    int getData(int index,T &x)const;
    void setData(int index,T &x);
    bool remove(int index);
    bool insert(int index,int n);
    bool isEmpty();
    bool isFull();
    void input();
    void output();
    SeqList<T>& operator=(const SeqList<T>& L);
protected:
    T* data;
    int maxSize;
    int last;
    void reSize(int newSize);
};
int main(){

}