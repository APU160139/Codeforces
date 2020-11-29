#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,c,i,t,r;
    string s;
    c=0;
    cin>>s;
    l=s.length();
    for(i=0;i<l;i++){
        if(s[i]=='a'){
           c++;
        }
    }
    t=2*c-1;
    r=min(l,t);
    cout<<r<<endl;
   return 0;
}
