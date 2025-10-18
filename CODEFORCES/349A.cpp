#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,c25=0,c50=0,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]==25)
            c25++;
        if(a[i]==50) {
            c50++;
            c25--;
            if(c25<0) {
                cout<<"NO";
                exit(0); } }
        if(a[i]==100) {
            if(c50>0) {
                c50--;
                c25--;
                if(c25<0) {
                    cout<<"NO";
                    exit(0); } }
            else {
                c25=c25-3;
                if(c25<0) {
                    cout<<"NO";
                    exit(0); } } } }
    cout<<"YES"; }