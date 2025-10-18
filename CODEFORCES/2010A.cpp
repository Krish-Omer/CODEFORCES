#include<bits/stdc++.h>
using namespace std;
int main() {
    int k,t,n,i;
    cin>>t;
    for(k=0;k<t;k++) {
        int sum=0,p;
        cin>>n;
        for(i=0;i<n;i++) {
            cin>>p;
            if(i%2==0)
                sum=sum+p;
            else 
                sum=sum-p; }
        cout<<sum<<endl; } }