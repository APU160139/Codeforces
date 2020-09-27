#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,k,d;
    long long int ans;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        ans=0;
        d=0;
        scanf("%lld %lld %lld",&a,&b,&k);
        if(k%2==1){
            d=(k/2)+1;
        }else{
            d=k/2;
        }
        ans=(d*a)-((k-d)*b);
        printf("%lld\n",ans);

    }
    return 0;
}
