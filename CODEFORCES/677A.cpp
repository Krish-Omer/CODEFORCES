#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,h,q=0,i,p;
    cin>>n>>h;
    for(i=0;i<n;i++) {
        cin>>p;
        if(p>h) 
            q=q+2; 
        else 
            q=q+1; }
    cout<<q<<endl; }