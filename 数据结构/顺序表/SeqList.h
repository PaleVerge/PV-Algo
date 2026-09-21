//
// Created by whip on 2026/9/21.
//

#ifndef PV_ALGO_SEQLIST_H
#define PV_ALGO_SEQLIST_H
#include <cstdlib>
using namespace std;
int defaultSize = 100;
template<typename T>
class SeqList{
public:
    SeqList(int sz = defaultSize);
    SeqList(const SeqList<T>& L);
    ~SeqList(){delete[] data;};
    int Size()const{return maxSize;};
    int Length()const{return last + 1;};
    int Locate(int index)const;
    int Search(T &x)const;
    bool getData(int index,T &x)const{
        if (index>=0 && index<=last){
            x=data[index];
            return true;
        }
        return false;

    };
    void setData(int index,T &x){
        if (index>=0 && index<=last){
            data[index]=x;
        }
    };
    bool remove(int index);
    bool insert(int index,T x);
    bool isEmpty(){return(last == -1)?true:false;};
    bool isFull(){return(last == maxSize-1)?true:false;};
    void input();
    void output()const;
    void output2()const;
    SeqList<T>& operator=(const SeqList<T>& L);
    void reverse();
    bool ishw();
    void oddeven();
    void huhuan(int n);
protected:
    T* data;
    int maxSize;
    int last;
    void reSize(int newSize);
};

template <typename T>
void SeqList<T>::huhuan(int n){
    int len = last+1;
    this->reSize(maxSize+n);
    for (int i=0;i<n;++i){
        this->insert(i+len,data[i]);
    }
    for (int i=0;i<n;++i){
        this->remove(0);
    }
}
template <typename T>
bool SeqList<T>::ishw(){
    for(int i=0;i<last-i;++i){
        if (data[i]!=data[last-i])
            return false;
    }
    return true;
}

template <typename T>
void SeqList<T>::oddeven(){
    SeqList<T> tmp(maxSize);
    for (int i=0;i<=last;++i){
        if (data[i]%2!=0){
            tmp.insert(tmp.last+1,data[i]);
        }
    }
    for (int i=0;i<=last;++i){
        if (data[i]%2==0){
            tmp.insert(tmp.last+1,data[i]);
        }
    }
    *this = tmp;
}

template <typename T>
void SeqList<T>::reverse(){
    for(int i=0;i<last-i;++i){
        T tmp=data[i];
        data[i]=data[last-i];
        data[last-i]=tmp;
    }
}

template<typename T>
SeqList<T>::SeqList(int sz){
    if (sz>0){
        maxSize = sz; last=-1;
        data = new T[maxSize];
        if (data == NULL){
            cerr<<"存储分配错误！"<<endl;
            exit(-1);;
        }
    }
}

template<typename T>
SeqList<T>::SeqList(const SeqList<T>& L){
    maxSize = L.Size();
    last = L.Length()-1;
    data = new T[maxSize];
    if (data == NULL){
        cerr<<"存储分配错误！"<<endl;
        exit(-1);;
    }
    for(int i=0;i<=last;++i){
        data[i] = L.data[i];
    }
}

template<typename T>
int SeqList<T>::Locate(int index)const{
    if(index >= 0 && index <= last){
        return index;
    }
    return -1;
}

template<typename T>
int SeqList<T>::Search(T &x)const{
    for(int i=0;i<=last;++i){
        if(data[i] == x){
            return i;
        }
    }
    return -1;
}

template<typename T>
bool SeqList<T>::remove(int index){
    if(index < 0 || index > last){
        return false;
    }
    for(int i=index;i<last;++i){
        data[i] = data[i + 1];
    }
    --last;
    return true;
}

template<typename T>
bool SeqList<T>::insert(int index,T x){
    if(last >= maxSize-1){
        reSize(maxSize * 2);
    }
    if(index < 0 || index > last + 1){
        return false;
    }
    for(int i=last;i>=index;--i){
        data[i + 1] = data[i];
    }
    data[index] = x;
    ++last;
    return true;
}

template<typename T>
void SeqList<T>::input(){
    int n;
    cin >> n;
    if(n < 0){
        return;
    }
    for(int i=0;i<n;++i){
        T x;
        cin >> x;
        insert(i,x);
    }
}

template<typename T>
void SeqList<T>::output()const{
    cout << "{";
    for(int i=0;i<=last;++i){
        cout<<" "<<data[i];
    }
    cout << " }" << endl;
}
template<typename T>
void SeqList<T>::output2()const{
    for(int i=0;i<=last;++i){
        cout<<data[i];
        if (i!=last)
            cout<<",";
    }
}

template<typename T>
SeqList<T>& SeqList<T>::operator=(const SeqList<T>& L){
    if(this != &L){
        delete[] data;
        maxSize = L.maxSize;
        last = L.last;
        data = new T[maxSize];
        for(int i=0;i<=last;++i){
            data[i] = L.data[i];
        }
    }
    return *this;
}

template<typename T>
void SeqList<T>::reSize(int newSize){
    if(newSize <= maxSize){
        return;
    }
    T* newData = new T[newSize];
    for(int i=0;i<=last;++i){
        newData[i] = data[i];
    }
    delete[] data;
    data = newData;
    maxSize = newSize;
}
#endif //PV_ALGO_SEQLIST_H
