#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,k,n,p;
    cin>>t;
    for(k=0;k<t;k++) {
        cin>>n;
        p=n/4;
        cout<<p+((n-(4*p))/2)<<endl; } }