#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,a,b,c,ans,t;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b;
        c=abs(a-b);
        ans=c/5;
        c=c%5;
        if(c==1 || c==2){
           ans++;
        }
        else if(c){
           ans=ans+2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
