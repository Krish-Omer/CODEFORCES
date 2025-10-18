#include<bits/stdc++.h>
using namespace std;
int main() {
    int q,t,n,k;
    cin>>t;
    for(q=0;q<t;q++) {
        cin>>n>>k;
        int a[n],count=0,i,gold=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++) {
            if(a[i]==0) {
                if(gold!=0) {
                    gold--;
                    count++; } }
            else {
                if(a[i]>=k)
                    gold=gold+a[i]; } }
        cout<<count<<endl; } }