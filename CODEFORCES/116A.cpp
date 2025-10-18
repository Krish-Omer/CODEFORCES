#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,j,n,q,r,max=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) {
        cin>>q;
        cin>>r;
        if(i==0) {
            a[i]=r-q;
            if(a[i]>max)
                max=a[i]; }
        else  {
            a[i]=a[i-1]+r-q;
            if(a[i]>max)
                max=a[i]; } }
    cout<<max<<endl; }