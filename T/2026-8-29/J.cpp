#include<cstdio>
long long gcd(long long a,long long b){
    return b?gcd(b,a%b):a;
}
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        long long n,m;
        scanf("%lld%lld",&n,&m);
        printf("%lld\n",n+m-gcd(n,m)-1);
    }
    return 0;
}
