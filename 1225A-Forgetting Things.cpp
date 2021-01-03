#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,a,b;
    cin>>A>>B;
    if(A==B){
        a=A*10;
        b=a;
        cout<<a<<" "<<b+1<<endl;
    }
    else if(A+1==B){
        b=B*10;
        a=b;
        cout<<a-1<<" "<<b<<endl;
    }
    else if(B*10==A+1){
        cout<<A<<" "<<B*10<<endl;
    }
    else{
        cout<<-1<<endl;
    }

    return 0;
}
