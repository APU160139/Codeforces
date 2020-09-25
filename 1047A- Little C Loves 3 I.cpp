#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,c;
    scanf("%lld",&n);
    if( (n - 2) % 3 == 0){
        a = 1,b = 2,c = (n - 3);
    }
    else{
        a = 1,b = 1,c = (n - 2);
    }
    printf("%lld %lld %lld",a,b,c);
    return 0;
}
