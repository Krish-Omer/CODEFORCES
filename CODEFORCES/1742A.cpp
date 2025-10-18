#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,i,a,b,c;
    cin>>t;
    for(i=0;i<t;i++) {
        cin>>a>>b>>c;
        if(a==(b+c) || b==(a+c) || c==(a+b))
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl; } }