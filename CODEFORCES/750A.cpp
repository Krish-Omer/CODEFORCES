#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k,i,time=0;
    cin>>n>>k;
    for(i=1;i<=n;i++) {
        time=time+(5*i);
        if(time>(240-k))
            break; }
    cout<<i-1; }