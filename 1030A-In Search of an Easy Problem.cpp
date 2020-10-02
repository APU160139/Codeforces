#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,s[105],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
        sum=sum+s[i];
    }
    if(sum>0){
      printf("HARD");
    }
    else{
      printf("EASY");
    }
    return 0;
}

