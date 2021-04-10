#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    for(i=0;i<t;i++){
        string s=" ";
        cin>>n;
        while(n>=4)
            s=s+"1",n-=2;
        if(n==3){
            s=s+"7",n-=3;
        }
        else if(n==2){
            s=s+"1",n-=2;
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
    return 0;
}
