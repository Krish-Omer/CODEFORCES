#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,hired=0,cases=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++) {
        if(a[i]<0) { 
            if(hired+a[i]<0)
                cases++;
            else
                hired--; }
        else
            hired += a[i]; }
    cout<<cases<<endl; }