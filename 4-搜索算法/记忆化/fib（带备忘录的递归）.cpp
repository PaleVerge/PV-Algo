#include <cstring>
#include <iostream>
#include <iomanip>
using namespace std;
using ll = long long;
const int N =1e5+9;

ll dp[N];	//备忘录数组

ll fib(int n){
	if(dp[n]!=-1)return dp[n]; //被计算过，直接返回

	if(n==1 || n==2) return 1; //if(n <= 2){

	return dp[n] = fib(n-1)+fib(n-2);	//计算，备忘，返回
}
int main(){
	memset(dp,-1,sizeof(dp));	//初始化备忘录，-1为未被计算过
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		cout<<fib(i)<<endl;
	}
	return 0;
}
