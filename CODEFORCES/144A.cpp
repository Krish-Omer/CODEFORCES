#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,mini=101,maxi=-1,p,q;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++) {
        if(a[i]<=mini) {
            mini=a[i];
            p=i; } }
    for(i=0;i<n;i++) {
        if(a[i]>maxi) {
            maxi=a[i];
            q=i; } }
    if(q>p)
    cout<<q+(n-p-2);
    else
    cout<<q+(n-p-1); }