#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,j,t,k,n;
    cin>>t;
    for(k=0;k<t;k++) {
        cin>>n;
        vector<int> v;
        int p,maxi=0,k=-1;
        for(i=0;i<n;i++) {
            cin>>p;
            v.push_back(p);
            maxi=max(maxi,v[i]); }
        for(i=0;i<n;i++) {
            if(v[i]>=maxi) {
                if(i%2==0)
                    k=1; } }
        if(n%2==0)
            cout<<maxi+(n/2)<<"\n";
        else  {
            if(k>0)
                cout<<maxi+(n/2)+1<<"\n";
            else
                cout<<maxi+(n/2)<<"\n"; } } }