#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k,i,count=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++) {
        cin>>a[i];
        a[i]=a[i]+k; 
        if(a[i]<=5)
            count++; }
    cout<<count/3; }