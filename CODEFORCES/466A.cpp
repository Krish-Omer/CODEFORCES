#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,a,b,k,p,q;
    cin>>n>>m>>a>>b;
    k=n/m;
    float d=(float)b/m;
    if(d<a) {
    p=(k*b)+(n-(m*k))*a;
    q=(k+1)*b;
    if(p<q)
        cout<<p<<endl;
    else 
        cout<<q<<endl; }
    else {
        cout<<n*a<<endl; } }