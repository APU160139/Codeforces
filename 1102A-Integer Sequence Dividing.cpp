#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,b,c,d;
    scanf("%lld",&n);
    b=n*(n+1);
    c=b/2;
    d=c%2;
    printf("%lld\n",d);
    return 0;
}
