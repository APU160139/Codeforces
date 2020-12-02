#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,z,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
      scanf("%d %d %d",&x,&y,&z);
        if(x>y){
         swap(x,y);
        }
        if(x>z){
         swap(x,z);
        }
        if(y>z){
         swap(z,y);
        }
        if(y==z){
          printf("YES\n");
          printf("%d %d %d\n",x,x,z);
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}

