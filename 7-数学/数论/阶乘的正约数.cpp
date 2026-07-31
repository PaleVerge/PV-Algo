#include <bits/stdc++.h>
using namespace std;
const int N=1e2+7;
int cnt[N];

int main(){
	for(int i=1;i<=100;++i){
		int x=i;
		for(int j=2;j*j<=i;++j){
			if(x%j==0){
				while(x%j==0){
					x/=j;
					cnt[j]++;	
				}
			}
		}
		if(x>1)cnt[x]++;
	}	
	long long ans=1;
	for(int i=1;i<=100;++i){
		if(cnt[i]!=0)ans*=(cnt[i]+1);
	}
	cout<<ans<<endl;
	return 0;
}
