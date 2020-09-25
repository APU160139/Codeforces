#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,dot,i;
    scanf("%d %d",&a,&b);
    if(a < b){
        swap(a,b);
    }
    c = 0;
    for(i=a; i<=6; i++){
        c++;
    }
    dot = c/6;
    if(dot == 1){
        printf("1/1\n");

    }
    else{
        if(c == 0){
            printf("0/1\n");

        }
        else if(c == 1){
            printf("1/6\n");

        }
        else if(c == 2){
            printf("1/3\n");

        }
        else if(c == 3){
            printf("1/2\n");

        }
        else if(c == 4){
            printf("2/3\n");

        }
        else if(c == 5){
            printf("5/6\n");

        }
    }
    return 0;
}
