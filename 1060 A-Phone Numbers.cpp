#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt,i,d;
    string s;
    cin>>n>>s;
    cnt=0;
    for(i=0;i<n;i++){
        if(s[i] == '8'){
            cnt++;
        }
    }
    d=n/11;
    if(cnt>=d){
        cout<<n/11<<endl;
    }
    else if(cnt<d&&n>11){
        cout<<cnt<<endl;
    }
    else{
        cout<<0<<endl;
    }

    return 0;
}
