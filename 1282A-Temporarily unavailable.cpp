#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,r,t,d,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>r;
        if(a>b){
            swap(a,b);
        }
        d=max(min(b,c+r)-max(a,c-r),0);
        ans=b-a-d;
        cout<<ans<<endl;
    }
    return 0;
}
