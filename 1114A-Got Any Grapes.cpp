#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a,b,c,Andrew,Dmitry,Michal;
    scanf("%d %d %d",&x,&y,&z);
    scanf("%d %d %d",&a,&b,&c);
    Andrew = 0;
    Dmitry = 0;
    Michal = 0;
    if(a >= x){
        Andrew = 1;
        b = b + (a - x);
    }
    if(b >= y){
        Dmitry = 1;
        c =c + (b - y);
    }
    if(c >= z){
        Michal = 1;
    }
    if( (Andrew == 1 && Dmitry == 1 ) && Michal == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

      return 0;
}
