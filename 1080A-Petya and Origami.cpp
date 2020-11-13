#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,res,red,green,blue,a,b,c;
    scanf("%lld %lld",&n,&k);
    a=((2*n)+k-1)/k;
    b=((5*n)+k-1)/k;
    c=((8*n)+k-1)/k;
    red=ceil(a);
    green=ceil(b);
    blue=ceil(c);
    res=red+green+blue;
    printf("%lld\n",res);
}
