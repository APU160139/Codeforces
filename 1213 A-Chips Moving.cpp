#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,n,a,c=0,b=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        if(a%2==1){
            b++;
        }
    }
    c= min(b,n-b);
    cout<<c<<endl;
    return 0;
}
