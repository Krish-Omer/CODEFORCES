#include<bits/stdc++.h>
using namespace std;
int main() {
    int k,t,n,i;
    vector<int> v1;
    cin>>t;
    for(k=0;k<t;k++) {
        cin>>n;
        for(i=0;i<n;i++)
            v1.push_back(i+1);
        cout<<2<<endl;
        if(n==2)
            cout<<1<<" "<<2<<endl;
        else {
            for(i=0;i<n-1;i++) {
                if(i==0) {
                    cout<<v1[n-1]<<" "<<v1[n-3]<<endl;
                    v1[n-3]=v1[n-2]; }
                else {
                    cout<<v1[n-1-i]<<" "<<v1[n-2-i]<<endl;
                    v1[n-2-i]=(v1[n-2-i]+v1[n-1-i])/2; } } }
        v1.clear(); } }