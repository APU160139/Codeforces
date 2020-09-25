#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res,i;
    int c[]={100,20,10,5,1};
    scanf("%d",&n);
    res=0;
    for(i=0; i<5; i++)
    {
        res=res+(n/c[i]);
        n=n%c[i];
    }
    printf("%d\n",res);
    return 0;
}
