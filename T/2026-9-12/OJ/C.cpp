//
// Created by whip on 2026/9/13.
//

#include <iostream>
#include <vector>
using namespace  std;

bool is(int n){
    if (n<2)
        return false;
    for (int i = 2; i * i <= n; ++i){
        if (n % i == 0)
            return false;
    }
    return true;
}
signed main(){
    int n=0;
    while (cin>>n){
        vector<int> vec;
        int idx = 0;

        for (int i=2;idx<n;++i){
            if (is(i)){
                idx++;
                vec.push_back(i);
            }
        }
        cout<<vec[n-1]<<endl;
    }

}