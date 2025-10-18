#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k,l,c,d,p,nl,np,kl,cd,x,y,z,mini;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    kl=k*l;
    cd=c*d;
    x=kl/nl;
    y=cd;
    z=p/np;
    mini=min(x,y);
    mini=min(mini,z);
    cout<<mini/n; }