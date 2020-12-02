#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,r,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        if(n<31){
          printf("NO\n");
        }
        else{
          printf("YES\n");
           r=n-30;
            if( (r!= 14 && r!= 10 )&&(r!= 6)){
                printf("14 10 6 %d\n",r);
            }
            else{
               printf("6 10 15 %d\n",n-31);
            }
        }
    }

    return 0;
}
