//
// Created by ritno on 2026/4/7.
//
//2942数字王国之军训排队
#include <bits/stdc++.h>
using namespace std;
const int N=15 ;//
int a[N],n;
vector<int> v[N];
//可以分到cnt个队伍
bool dfs(int cnt,int dep){
    //若所有人都分完了
    if(dep==n+1){
        //检查合法性
        for(int i=1;i<=cnt;++i){
            for(int j=0;j<v[i].size();++j){
                for(int k=j+1;k<v[i].size();++k){
                    if(v[i][k]%v[i][j]==0)return false;
                }
            }
        }
        return true;
    }
    //枚举每个人所属的队伍
    for(int i=1;i<=cnt;++i){
        v[i].push_back(a[dep]);
        if(dfs(cnt,dep+1))return true;
        //恢复现场
        v[i].pop_back();
    }
}
int main(){
    cin>>n;	//输入待分组学生个数
    for(int i=1;i<=n;++i)cin>>a[i];	//输入n个学生名称
    sort(a+1,a+1+n);
    for(int i=1;i<=n;++i){	//从分1组开始从小遍历到n组，寻找到最小的break
        if(dfs(i,1)){	//可以分到i队中，从第一个同学开始分
            cout<<i<<'\n';
            break;
        }
    }
    return 0;
}