#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,k,x,y,t;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d>>k;
        if(a%c==0)
            x=a/c;
        if(a%c!=0)
            x=a/c+1;
        if(b%d==0)
            y=b/d;
        if(b%d!=0)
            y=b/d+1;
        if((x+y)>k){
            cout<<"-1"<<endl;
        }
        if((x+y)<=k){
           cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}
