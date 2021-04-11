#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[1000],sum,zero,i,ans;
    cin>>t;
    while(t--){
        sum=0;
        zero=0;
        cin>>n;
        for(i=0;i<n; i++){
            cin>>a[i];
            if(a[i]==0)
                zero++;
                sum+=a[i];
        }
        ans=zero;
        sum=sum+zero;
        if(sum==0){
            cout<<ans+1<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}
