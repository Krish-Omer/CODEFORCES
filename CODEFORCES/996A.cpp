#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,a,b,c,d,e;
    cin>>n;
    a=n/100;
    b=n-100*a;
    c=b/20;
    b=b-20*c;
    d=b/10;
    b=b-10*d;
    e=b/5;
    b=b-5*e;
    cout<<a+c+d+e+b<<endl; }