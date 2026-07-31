#include <iostream>
#include <iomanip>
using namespace std;
using ll = long long;


ll fib(int n){
	if(n==1 || n==2){ //if(n <= 2){
		return 1;
	}else{
		return fib(n-1)+fib(n-2);
	}
	
}
int main(){
	int n;
	cin>>n;

	for(int i=1;i<=n;i++){
		cout<<fib(i)<<endl;
	}
	return 0;
}
