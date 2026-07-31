//
// Created by whip on 2026/5/27.
//
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int a[100]={5,6,8,6,9,1,6,1,2,4,9,1,9,8,2,3,6,4,7,7,5,9,5,0,3,8,7,5,8,1,5,8,6,1,8,3,0,3,7,9,2,7,0,5,8,8,5,7,0,9,9,1,9,4,4,6,8,6,3,3,
8,5,1,6,3,4,6,7,0,7,8,2,7,6,8,9,5,6,5,6,1,4,0,1,0,0,9,4,8,0,9,1,2,8,5,0,2,5,3,3};

vector<int> dayInMonth={0,31,28,31,30,31,30,31,31,30,31,30,31};
//子序列匹配
bool submatch(vector<int> target){
    int idx=0;
    for (int i=0;i<100;i++){
        if (a[i]==target[idx]){
            idx++;
            if (idx==target.size()){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int cnt=0;
    //ifstream infile("data.txt");
    //while (infile>>a){
    //    cout<<a<<',';
    // }
    vector<int> vec;
    //枚举每个日期
    for (int i=1;i<=12;++i){
        for (int j=1;j<=dayInMonth[i];++j){
            vector<int> target={2,0,2,3,i/10,i%10,j/10,j%10};
            //下或cnt+=submatch(target)
            if (submatch(target)){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}