#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a1,a2,p,x,k1,k2;
    cin>>a1>>a2>>k1>>k2>>n;
    if(k1>k2)
    {
        swap(k1,k2);
        swap(a1,a2);
    }
    if(n<=a1*k1){
       x=n/k1;
    }
    else{
       x=a1+(n-a1*k1)/k2;
    }
    p=n-a1*(k1-1)-a2*(k2-1);
    cout<<max(0,p);
    cout<<" "<<x<<endl;
    return 0;
}
