#include <string>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> muti(vector<int> &A,vector<int> &B){
    vector<int> res(A.size()+B.size(),0);

    if(A.size()<B.size()) return muti(B,A);
    for(int i=0;i<A.size();i++){
        for(int j=0;j<B.size();j++){
            res[i+j] += A[i]*B[j];
            res[i+j+1] += res[i+j]/10;
            res[i+j] %= 10;
        }
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
    auto res = muti(A,B);
    for(int i=res.size()-1;i>=0;i--){
        cout<<res[i];
    }
    cout<<endl;
    return 0;
}
