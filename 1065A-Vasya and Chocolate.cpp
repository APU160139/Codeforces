#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,s,a,b,c,d,i,buy,res;
    d=0;
    buy=0;
    res=0;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld %lld %lld %lld",&s,&a,&b,&c);
        buy = s/c;
        d= buy/a;
        res=(d*a)+(d*b);
        res=res+(buy%a);
        printf("%lld\n",res);
    }

    return 0;
}

