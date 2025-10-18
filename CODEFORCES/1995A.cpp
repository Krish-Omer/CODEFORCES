#include<bits/stdc++.h>
using namespace std;
int main() {
    int h,t,n,k;
    cin>>t;
    for(h=0;h<t;h++) {
        cin>>n>>k;
        int count=0;
        if(k==0) {
            cout<<0<<endl;
            continue; }
        else {
        k=k-n;
        count++;
        while(k>0) {
            n--;
            count++;
            k=k-n;
            if(k>0) {
                k=k-n;
                count++; } } }
    cout<<count<<endl; } }