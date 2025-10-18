#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,k,n,i,c1,p,c2;
    cin>>t;
    for(k=0;k<t;k++) {
        c1=0;
        c2=0;
        cin>>n;
        for(i=0;i<n;i++) {
            cin>>p;
            if(p==1)
                c1++;
            else 
                c2++; }
        if(c1==0) {
                if(n%2==0)
            cout<<"YES"<<endl;
                else 
            cout<<"NO"<<endl; }
        else {
            if(c1%2==0)
                cout<<"YES"<<endl;
            else 
                cout<<"NO"<<endl; } } }