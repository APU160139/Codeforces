#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    long long int a[1010];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%lld",&a[i]);
        if(a[i]%2 == 0){
            a[i] = a[i]-1;
        }
    }
    for(j=0;j<n;j++){
        printf("%lld ",a[j]);
    }
    return 0;
}
