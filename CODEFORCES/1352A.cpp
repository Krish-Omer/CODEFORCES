#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,i,n,j;
    cin>>t;
    for(i=0;i<t;i++) {
        int p,q=0,count=0,a[5],k;
        cin>>n;
        for(j=0;n!=0;j++) {
            a[j]=n%10;
            if(a[j]==0)
                q++;
            count++;
            n=n/10; }
        cout<<count-q<<endl;
        for(k=0;k<count;k++) {
            if(a[k]!=0)
                cout<<a[k]*pow(10,k)<<" "; }
        cout<<endl; } }