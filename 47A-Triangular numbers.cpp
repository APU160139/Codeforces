#include<bits/stdc++.h>
using namespace std;
bool triangle(int number)
{
    if (number < 0)
        return 0;

    int sum = 0;
    for (int n=1; sum<=number; n++)
    {
        sum = sum + n;
        if (sum==number)
            return 1;
    }

    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(triangle(n)){
       printf("YES\n");
    }
    else{
      printf("NO\n");
    }

    return 0;
}
