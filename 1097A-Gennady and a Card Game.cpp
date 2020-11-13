#include<bits/stdc++.h>
using namespace std;
int main () {
    string c,s;
    int i,f;
    cin >>c;
    f=0;
    for(i=0;i<5;i++) {
        cin >>s;
        if(s[0] == c[0] || s[1] == c[1]){
            f=1;
        }
    }
    if(f==1){
      cout << "YES";
    }
    else{
       cout << "NO";
    }
    return 0;
}
