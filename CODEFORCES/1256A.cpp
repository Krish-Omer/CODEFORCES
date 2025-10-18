#include<bits/stdc++.h>
using namespace std;
int main() {
    int k,t,i,j,cn,c1,n,s,p,q;
    cin>>t;
    for(k=0;k<t;k++) {
        cin>>cn>>c1>>n>>s;
        p=max((s-c1+n-1)/n,0);
        q=min(s/n,cn);
        if(p<=q)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl; } }