#include <bits/stdc++.h>
using namespace std;
//必须是顺序储存结构
//必须是有序的数据，不单调需要先排序
int binsearch(int a[],int n,int s){ 
    int left = 0,right = n-1;
	int result = -1;
    while(left <= right){ //必须小于等于，否则单个数据时无法查找
		int mid = left+((right-left)>>1); //防止溢出+位运算符效率更高
		if(a[mid] == s){
			result = mid; //查找第一次出现的位置
			right = mid-1;// 继续向左找，看有没有更靠前的目标值
		}else if(a[mid] > s){
                right = mid-1;
		}else{
                left = mid+1;
        } 
    }
	return result; 
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int m,n; //共n个数据，查找其中m个
    cin>>n>>m;
    vector<int> a,b;

    for(int i=0;i<n;i++){ //读入n个数据
		int num;
		cin>>num;
        a.push_back(num);
    }
    for(int i=0;i<m;i++){ //读入待查找的数据
		int sea;
		cin>>sea;
        b.push_back(sea);//push_back()不能传入流
    }

    for(int i=0;i<m;i++){
		if(i>0)cout<<" ";
		int index = binsearch(a.data(),n,b[i]);
		int ans = (index==-1)?-1:(index+1);
		cout<<ans;
    }
    return 0;
}