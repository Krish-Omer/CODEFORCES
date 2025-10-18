#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j;
    cin>>n;
    int a[n+1];
    a[0]=0;
    for(i=1;i<n+1;i++) {
        cin>>a[i]; }
    for(i=1;i<n+1;i++) {
        for(j=1;j<=n;j++) {
            if(i==a[j])
                cout<<j<<" "; } } }