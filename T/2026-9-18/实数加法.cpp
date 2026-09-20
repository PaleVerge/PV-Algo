//
// Created by whip on 2026/9/19.
//
#include <algorithm>
#include<iostream>
#include<string>
#include <vector>
using namespace std;
int main(){
    string s1,s2; cin>>s1>>s2;
    int i=s1.length()-1,j=s2.length()-1;
    string s1_int,s1_float,s2_int,s2_float;
    vector<int > v1_int,v1_float,v2_int,v2_float;
    for (;s1[i]!='.';--i){
        v1_float.push_back(s1[i]-'0');
    }
    i--;
    for (;i>0;--i){
        v1_int.push_back(s1[i]-'0');
    }

    for (;s2[j]!='.';--j){
        v2_float.push_back(s2[j]-'0');
    }
    j--;

    for (;j>0;--j){
        v2_int.push_back(s2[j]-'0');
    }

    reverse(v1_float.begin(),v1_float.end());
    reverse(v2_float.begin(),v2_float.end());
    reverse(v1_int.begin(),v1_int.end());
    reverse(v2_int.begin(),v2_int.end());

    if (v1_float.size()<v2_float.size()){
        for (int i=0;i<v2_float.size()-v1_float.size();++i){
            v1_float.push_back(0);
        }
    }else{
        for (int i=0;i<v1_float.size()-v2_float.size();++i){
            v2_float.push_back(0);
        }
    }

    vector<int> v1_ans_int,v1_ans_float,v2_ans_int,v2_ans_float;
    int over=0;
    for (int i=v1_float.size()-1;i>0;--i){
        if (v1_float[i]+v2_float[i]>=10){
            v1_ans_float.push_back((v1_float[i]+v2_float[i])%10+over);
            over=1;
        }else{
            v1_ans_float.push_back(v1_float[i]+v2_float[i]);
            over=0;
        }
    }
    for (int i=v1_int.size()-1;i>0;--i){
        if (v1_int[i]+v2_int[i]>=10){
            v1_ans_int.push_back((v1_int[i]+v2_int[i])%10+over);
            over=1;
        }else{
            v1_ans_int.push_back(v1_int[i]+v2_int[i]);
            over=0;
        }
    }
    for (int i=0;i<v1_ans_int.size();++i){
        cout<<v1_ans_int[i];
    }
    cout<<'.';
    for (int i=0;i<v1_ans_float.size();++i){
        cout<<v1_ans_float[i];
    }

}