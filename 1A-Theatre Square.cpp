#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,sol;
    scanf("%lld %lld %lld",&n,&m,&a);
    sol=((n+a-1)/a)*((m+a-1)/a);
    printf("%lld\n",sol);

    return 0;
}
