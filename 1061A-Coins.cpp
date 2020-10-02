#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, s,i,ans = 0;
    scanf("%d %d",&n,&s);
    for(i=n; i>0; i--){
        ans=ans+(s/i);
        s=s%i;
    }
    printf("%d\n",ans);
    return 0;
}
