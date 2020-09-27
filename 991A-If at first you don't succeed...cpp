#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,sum = 0, ans = 0;
    scanf("%d %d %d %d",&a,&b,&c,&n);
    sum =sum + (a - c);
    sum =sum + (b - c);
    sum =sum + c;
    ans = n - sum;
    if(ans <= 0 || (a<c) || (b < c)){
        printf("-1\n");
    }
    else{
        printf("%d\n",ans);
    }

    return 0;
}
