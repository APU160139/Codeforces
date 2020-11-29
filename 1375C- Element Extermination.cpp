#include<bits/stdc++.h>
using namespace std;
int a[300000];
int main()
{
    int t,n,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
      scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        if(a[0]<a[n-1]){
            printf("YES\n");
        }
        else{
            printf("NO\n");        }
    }

    return 0;
}
