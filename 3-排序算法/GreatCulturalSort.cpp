//
// Created by ritno on 2026/4/14.
//
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <numeric>

using namespace std;
using ll=long long;
const int Min_Living =5;


void GreatCulturalSort(vector<int> &a){
    if (a.size()<2) return ;
    auto it_max=max_element(a.begin(),a.end());// 找出最大值
    int bureaucracy_origin=*it_max;
    *it_max=0;    //最大值清零
    int disgraced=*it_max;
    a.erash(it_max);    //将最大值从中心移除
    a.push_back(disgraced);     //最大值下放到数组末尾
    ll sum=accumulate(a.begin(),a.end()-1,0LL);
    int ave=sum/(a.size()-1);
    for (size_t i=0;i<a.size()-1;++i) a[i]=ave;//平均分配
    random_device rf;   //平均数乱序
    mt19937 g(rd());
    shuffle(a.begin(),a.end()-1,g);
    for (size_t i = 0; i < a.size() - 1; ++i) {
            if (a[i] > 0) {
                int loss = rand() % (ave / 3 + 1);   //一部分数随机减少  
                a[i] = max(0, a[i] - loss);
                if (i % 3 == 0 && i + 1 < a.size() - 1) {  // 部分数稍微增加
                    int gain = rand() % (ave / 5 + 1);
                    a[i] += gain;
                    a[i + 1] = max(0, a[i + 1] - gain);   
                }
            }
        }
    a.back()=bureaucracy_origin;    //原最大值复出
    ll excess=0;
    for (size_t i=0;i<a.size()-1;i++){
        excess+=a[i]-Min_Living;    //维持其他数为最低基准
    }
    a.back()+=excess;    //过剩值归最大值
    sort(a.begin(),a.end());    //秩序重构，单调压倒一切
}



int main(){
    vector<int> a;
    int n;cin>>n;
    for (size_t i=0;i<n;++i){
        int x;cin>>x;
        a.push_back(x);
    }
    GreatCulturalSort(a);
    for (size_t i=0;i<n;++i){
        cout<<a[i]<<' ';
    }
    return 0;
}