#include<bits/stdc++.h>
using namespace std;
int main(){
 int t,i;
 long long int l,r,d;
 scanf("%d",&t);
 for(i=1;i<=t;i++){
    scanf("%lld %lld",&l,&r);
    d=l*2;
    printf("%lld %lld\n",l,d);
 }
 return 0;
}
