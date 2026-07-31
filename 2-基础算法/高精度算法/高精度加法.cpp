#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<int> add(vector<int> &A,vector<int> &B){
    if(A.size()<B.size()){
        return add(B,A);
    }

    vector<int> res;
    int t=0;
    
    for(int i=0;i<A.size();i++){
        t += A[i];
        if(i < B.size()){ //B短，若B还有，则加
            t += B[i];
        }
        res.push_back(t%10); //计算本位
        t/=10; //计算进位
    }
    if(t){ //若还有最高位，最后加上
        res.push_back(t);
    }
    return res;
}
int main(){
   string s1,s2;
   cin>>s1>>s2;
   vector<int> A,B;
   for(int i=s1.size()-1;i>=0;i--){
        A.push_back(s1[i]-'0');
   }
   for(int i=s2.size()-1;i>=0;i--){
        B.push_back(s2[i]-'0');
   }

   vector<int> res=add(A,B);

   for(int i=res.size()-1;i>=0;i--){
        cout<<res[i];
   }
   cout<<endl;

   return 0;
}

