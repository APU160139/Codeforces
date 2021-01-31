#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n,f,s,k,x,y;
    cin>>t;
    for(i=1;i<=t;i++){
        x=0;
        y=0;
        cin>>n>>f>>s;
        for(j=0;j<f;j++)
        {
            cin>>k;
            x=max(x,k);
        }
        for(j=0;j<s;j++)
        {
            cin>>k;
            y=max(k,y);
        }
        if(x>y)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
