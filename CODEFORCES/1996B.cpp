#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,h,k,n,c,i,j;
    cin>>t;
    for(h=0;h<t;h++) {
        cin>>n>>k;
        char a[n][n];
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                cin>>a[i][j]; } }
        int c=n/k,e=0,d=0;
        char b[c][c];
        for(i=0;i<c;i++) {
            for(j=0;j<c;j++) {
                b[i][j]=a[d][e];
                e=e+k; }
            d=d+k;
            e=0; }
        for(i=0;i<c;i++) {
            for(j=0;j<c;j++)
                cout<<b[i][j];
            cout<<endl; } } }