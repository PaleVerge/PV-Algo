//
// Created by ritno on 2026/4/5.
//
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool ishw(string s){
    string rev_s=s;
    reverse(rev_s.begin(),rev_s.end());

    transform(s.begin(),s.end(),s.begin(),::toupper);
    transform(rev_s.begin(),rev_s.end(),rev_s.begin(),::toupper);

    return (s==rev_s)?true:false;
}
int main(){
    string s;
    getline(cin,s);
    if (ishw(s))cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;
}