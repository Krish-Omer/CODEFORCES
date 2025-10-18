#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,k,n,sum,p;
    cin>>t;
    for(k=0;k<t;k++) {
        sum=0;
        cin>>n;
        for(;n!=0;) {
            p=n%10;
            sum=sum+p;
            n=n/10; }
        cout<<sum<<endl; } }