#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int res=-1000005,n,a,i,j,c;
    scanf("%lld",&n);
    for(i=0; i<n; i++){
        scanf("%lld",&a);
        if(a < 0){
            res = max(res,a);
        }
        else{
            c=0;
            for(j=0; j*j <= a; j++)
                if(j*j == a)c=1;
            if(c == 0)res = max(res,a);
        }
    }
    printf("%lld\n",res);
}
