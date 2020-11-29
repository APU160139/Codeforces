#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,x,y,n,i,r;
    scanf("%ld",&t);
    for(i=1;i<=t;i++){
        scanf("%ld %ld %ld",&x,&y,&n);
        r=0;
        r=n-n%x+y;
        if(r<=n){
            printf("%ld\n",r);
        }
        else{
            r=n-n%x-x+y;
            printf("%ld\n",r);
        }
    }

    return 0;
}
