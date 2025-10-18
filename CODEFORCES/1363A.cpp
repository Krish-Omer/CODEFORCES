#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,k,ce,co,p,x,i,n;
    cin>>t;
    for(k=0;k<t;k++) {
        cin>>n>>x;
        ce=co=0;
        for(i=0; i<n;i++) {
            cin>>p;
            if(p%2==0)
                ce++;
            else 
                co++; }
        if(co==0 || (ce==0 && (x%2==0)))
            cout<<"NO"<<endl;
        else {
            co--;
            x--;
            if(x-(co/2)*2<=ce)
                cout<<"YES"<<endl;
            else 
                cout<<"NO"<<endl; } } }