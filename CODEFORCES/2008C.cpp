#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,k,l,r;
    cin>>t;
    for(k=0;k<t;k++) {
        cin>>l>>r;
        int count=0,sum;
        for(sum=l;sum<=r;sum=sum+count)
            count++;
        cout<<count<<endl; } }