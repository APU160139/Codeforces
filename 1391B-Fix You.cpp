#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j,c;
    char a[100][100];
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        c = 0;
        for(i=0;i<n-1;i++){
            for(j=m-1;j<m;j++){
                if(a[i][j] == 'R'){
                    c++;
                    a[i][j] = 'D';
                }
            }
        }
        for(i=n-1;i<n;i++){
            for(j=0;j<m-1;j++){
                if(a[i][j] == 'D'){
                    c++;
                    a[i][j] = 'R';
                }
            }
        }
        printf("%d\n",c);
    }

    return 0;
}
