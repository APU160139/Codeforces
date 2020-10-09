#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,c,n,sum,d,i;
    cin>>t;
    for(i=1;i<=t;i++){
        sum=0;
        cin>>a>>b>>c>>n;
        sum+=a+b+c+n;
        d=sum/3;
        if(sum%3!=0 || d<a || d<b || d<c){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }

    return 0;
}
