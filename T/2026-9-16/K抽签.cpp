//
// Created by whip on 2026/9/16.
//
#include <algorithm>
#include <cstdio>
#include<vector>
using namespace std;

int main(){
    int n;
    while (scanf("%d",&n)!=EOF){
        vector<int> vec;
        for (int i=0;i<n;i++){
            int x; scanf("%d",&x);
            vec.push_back(x);
        }
        int m; scanf("%d",&m);
        bool exist = false;
        vector<int> sum_2;
        for (auto i:vec){
            for (auto j:vec){
                sum_2.push_back(i+j);
            }
        }
        sort(sum_2.begin(),sum_2.end());
        int l = 0, r = sum_2.size()-1;
        while (l<=r){
            if (sum_2[l]+sum_2[r]==m){
                exist = true;
                break;
            }
            if (sum_2[l]+sum_2[r]<m)
                l++;
            else
                r--;
        }
        if (exist) printf("Yes\n");
        else printf("No\n");
    }
}
