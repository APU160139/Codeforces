#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,h1,h2,h3,h4,h5,m,m1,m2,m3;
    scanf("%d : %d",&h1,&m1);
    scanf("%d : %d",&h2,&m2);
    h3 = h1 * 60 + m1;
    h4 = h2 * 60 + m2;
    h5 = (h3 + h4)/2;
    h = h5/60;
    m = h5 % 60;
    if(h > 9 && m > 9){
        printf("%d:%d\n",h,m);
    }
    else{
        if(h < 10){
            printf("0");
        }
        printf("%d:",h);
        if(m < 10){
            printf("0");
        }
        printf("%d",m);
    }
    return 0;
}
