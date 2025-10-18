#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,t,k,n,p;
    cin>>t;
    for(k=0;k<t;k++) {
        cin>>n;
        int alice[n],bob[n];
        for(i=0;i<n;i++) {
            cin>>p;
            alice[i]=p; }
        for(i=0;i<n;i++) {
            cin>>p;
            bob[i]=p; }
        if(n<=2)
            cout<<"Bob"<<endl;
        else {
            int count=0;
            for(i=0;i<n;i++) {
                if(alice[i]==bob[i])
                    count++; } 
            if(count==n)
                cout<<"Bob"<<endl;
            else {
                count=0;
                for(i=0;i<n;i++) {
                    if(alice[i]==bob[n-1-i])
                        count++; } 
                if(count==n)
                    cout<<"Bob"<<endl;
                else 
                    cout<<"Alice"<<endl; } } } }