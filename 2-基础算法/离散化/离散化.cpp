#include <bits/stdc++.h>
using namespace std;
const int N=1e5+7;

vector<int> L;
int a[N];

int getidx(int x){
  return lower_bound(L.begin(),L.end(),x)-L.begin();
}
int main(){
  int n;cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  
  for(int i=0;i<n;i++){
    L.push_back(a[i]);
  }
  sort(L.begin(),L.end()); 
  for(int i=0;i<n;i++){
    L.erase(unique(L.begin(),L.end()),L.end());
  }
  cout<<"离散化数组为："<<"\n";
  for(const auto & i:L)cout<<i<<' ';
  
  int val;
  cout<<"输入数字："<<endl;
  cin>>val;
  cout<<"下标为：";
  cout<<getidx(val)<<'\n';
  return 0;
}