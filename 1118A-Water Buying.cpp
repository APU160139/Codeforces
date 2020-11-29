#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,a,b,n,res,p;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        res = 0;
        scanf("%lld %lld %lld",&n,&a,&b);
        if(a*2<b){
            res= n*a;
        }
        else{
            p=n%2;
            res=(n/2)*b+(p*a);
        }
        printf("%lld\n",res);
    }
    return 0;
}
