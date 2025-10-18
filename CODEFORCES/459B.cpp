#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n,i,p,cmax=0,cmin=0,maxi=0,mini=1000000001;
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>p;
        if(p>maxi) {
            cmax=0;
            maxi=p; }
        if(p==maxi)
            cmax++;
        if(p<mini) {
            cmin=0;
            mini=p; }
        if(p==mini)
            cmin++; }
    if(maxi==mini)
        cout<<maxi-mini<<" "<<((n*(n+1))/2)-n<<endl;
    else
        cout<<maxi-mini<<" "<<cmin*cmax<<endl; }