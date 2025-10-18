#include<bits/stdc++.h>
using namespace std;
int main() {
    int k,t,i,n;
    cin>>t;
    for(k=0;k<t;k++) {
        cin>>n;
        int a[n],maxi=0,mini=1000000000;
        for(i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]<mini)
                mini=a[i];
            if(a[i]>maxi)
                maxi=a[i]; }
        cout<<maxi-mini<<endl; } }