#include <iostream>
#define N 150
using namespace std;

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,m;
    int a[N][N],ans[N][N];

    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    //扫描九宫格
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                ans[i][j]=9;
                continue;
            }
            for(int k=max(i-1,0);k<min(i+1,n);k++){
                for(int l=max(j-1,0);l<min(j+1,n;l++)){
                    if(a[i][j]==1) ans[i][j]++;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" 
            
            ";
        }
        cout<<endl;
    }
    return 0;
}