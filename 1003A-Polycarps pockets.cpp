#include<bits/stdc++.h>
using namespace std;
int count1[200];
int main()
{
    int a[101],n,i,j,ans=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        count1[a[i]]++;

    }
    for(j=0;j<n;j++){
        int res=a[j];
        if(count1[res]>ans){
            ans=count1[res];
        }
    }
   printf("%d\n",ans);
   return 0;
}
