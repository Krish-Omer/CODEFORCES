#include<bits/stdc++.h>
using namespace std;
int findindex(int a[] , int size) {
    int j;
    for(j=1;j<size;j++) {
        if(a[0]!=a[j]) {
            if(a[j]==a[j+1])
                return 1;
            else
                return j+1; } } 
    return 0; }
int main() {
    int t,i,j,n,k;
    cin>>t;
    for(k=0;k<t;k++) {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        cout<<findindex(a , n)<<endl; } }