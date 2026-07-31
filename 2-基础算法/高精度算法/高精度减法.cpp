#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
bool isequalorbig(vector<int> &A,vector<int> &B){//比较是否A小于B
    if(A.size() > B.size()) return 1;
    if(A.size() < B.size()) return 0;

    for(int i=A.size()-1;i>=0;i--){
        if(A[i]!=B[i]){
            return A[i]>B[i];
        }
    }
    return true;
}
vector<int> sub(vector<int> &A,vector<int> &B){

    vector<int> res;
    int flag=0;
    for(int i=0;i<A.size();i++){
        int t= A[i]-flag;
        if(i < B.size()){ //B短，若B还有，则减去
            t -= B[i];
        }
        res.push_back((t+10)%10); //计算本位
        
        if(t<0)flag=1; //是否借位
        else flag=0;
    }
    while(res.size()>1 && res.back()==0){
        res.pop_back();
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
   if(isequalorbig(A,B)){
        vector<int> res = sub(A,B);

        for(int i=res.size()-1;i>=0;i--){
                cout<<res[i];
        }
        cout<<endl;
   }else{
        vector<int> res = sub(B,A);
        cout<<'-';
        for(int i=res.size()-1;i>=0;i--){
                cout<<res[i];
        }
        cout<<endl;
   }

   return 0;
}

