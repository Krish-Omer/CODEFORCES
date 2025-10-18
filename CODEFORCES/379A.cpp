#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,count,nc,wax;
    cin>>a>>b;
    count=a;
    wax=a;
    nc=wax/b;
    while(nc!=0) {
        count=count+nc;
        wax=nc+(wax%b);
        nc=wax/b; }
    cout<<count<<endl; }