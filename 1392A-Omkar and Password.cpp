#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,f;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        f=0;
        for(i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                f=1;
            }
        }
        if(f==1)
        {
            printf("1\n");
        }
        else
           printf("%d\n",n);
    }
    return 0;
}
