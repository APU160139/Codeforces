#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c,p,a[105],i;
    c=0;
    p=0;
    scanf("%d %d",&n,&k);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++){
        if(a[i] <= k){
            c++;
        }
        else if(a[i] > k){
            p=i+1;
            break;
        }
    }
    if(p>0 && p<n){
        for(i=n-1; i>=p; i--){
            if(a[i] <= k){
                c++;
            }
            else if(a[i] > k){
                break;
            }
        }
    }

    printf("%d\n",c);

    return 0;
}
