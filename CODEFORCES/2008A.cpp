#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,t,a,b;
    cin>>t;
    for(i=0;i<t;i++) {
        cin>>a>>b;
        if(a!=0) {
            if(((a+(2*b))%2)==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl; }
        else {
            if(b%2==0)
                cout<<"YES"<<endl;
            else 
                cout<<"NO"<<endl; } } }