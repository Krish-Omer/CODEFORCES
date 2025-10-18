#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,living,capacity,count=0,i,j;
    cin>>n;
    int a[n][2];
    for(i=0;i<n;i++) {
        cin>>living;
        cin>>capacity;
        if(capacity-living>1)
            count++; }
    cout<<count<<endl; }