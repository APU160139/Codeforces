#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,r,x,y,i;
    scanf("%ld",&t);
    for(i=1;i<=t;i++){
        x=0;
        y=0;
        scanf("%d %d",&l,&r);
        if(l*2<=r){
            x=l;
            y=l*2;
        }
        else{
            x=-1;
            y=-1;
        }
        printf("%d %d\n",x,y);
    }

    return 0;
}
