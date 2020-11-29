#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r,i;
    string s,t;
    cin>>s>>t;
    n = s.length();
    m = t.length();
    if(n!= m){
        cout<<"NO"<<endl;
        return 0;
    }
    r=0;
    for(i=0;i<n;i++){
        if((s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') && (t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u')){
            r=1;
        }
        else if((s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u') && (t[i]!='a' && t[i]!='e' && t[i]!='i' && t[i]!='o' && t[i]!='u')){
            r=1;
        }
        else{
            r=0;
            break;
        }
    }
    if(r==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
