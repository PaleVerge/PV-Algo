#include <string>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

vector<int> divide(vector<int> &A,int b,int &r){
    vector<int> res;
    r=0;
    for(int i=A.size()-1;i>=0;i--){
        r = r * 10 + A[i]; // 余数左移并加上当前位
        res.push_back(r / b); // 这一位的商
        r %= b;
    }
    reverse(res.begin(),res.end());
    while(res.size()>1 && res.back()==0){
        res.pop_back();
    }
    return res;
}
int main(){
    int b,r=0;
    string s1;
    cin>>s1>>b;
    vector<int> A;
    for(int i=s1.size()-1;i>=0;i--){
        A.push_back(s1[i]-'0');
    }
    auto res=divide(A,b,r);
    for(int i=res.size()-1;i>=0;i--){
        cout<<res[i];
    }
    cout<<endl;
    return 0;
}