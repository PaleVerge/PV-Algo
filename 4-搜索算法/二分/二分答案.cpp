//使用条件：
//最大值最小化or最小值最大化问题
// 命题可以被归纳为使得某命题P(x)成立/不成立的最大/最小值x
#include <bits/stdc++.h>
using namespace std;
//寻找大于s的第一个数的位置
//用最后一个数字后的位置n作为无解的标志
int bin_an(int a[],int n,int s){
    int left=0,right=n-1;
    while(left<=right){
        int mid=left+((right-left)>>1);
        if(a[mid]>=s){
            right=mid;
        }else{
            left=mid+1;
        }
    }
    if(left!=n){ //若左指针移动到未标志位，则找到，返回位置
        return left;
    }else{
        return -1;
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);


    
    return 0;
}