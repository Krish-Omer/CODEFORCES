#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,maxi=0,eq=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) {
        cin>>a[i];
        maxi=max(maxi,a[i]); }
    for(i=0;i<n;i++)
        eq=eq+(maxi-a[i]);
    cout<<eq; }