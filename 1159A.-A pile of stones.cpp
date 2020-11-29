#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt = 0;;
    string s;
    cin>>n>>s;
    for(i=0;i<=n;i++){
        if(s[i] == '-' && cnt > 0){
            cnt--;
        }
        else if(s[i] == '+'){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
