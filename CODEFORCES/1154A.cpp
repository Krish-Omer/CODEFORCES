#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,d,maxi;
    cin>>a>>b>>c>>d;
    maxi=max(a,b);
    maxi=max(c,maxi);
    maxi=max(d,maxi);
    if(maxi==a)
    cout<<maxi-b<<" "<<maxi-c<<" "<<maxi-d;
    if(maxi==b)
    cout<<maxi-a<<" "<<maxi-c<<" "<<maxi-d;
    if(maxi==c)
    cout<<maxi-a<<" "<<maxi-b<<" "<<maxi-d;
    if(maxi==d)
    cout<<maxi-a<<" "<<maxi-b<<" "<<maxi-c; }