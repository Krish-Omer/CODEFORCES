#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j,count=0;
    cin>>n;
    int a[n][2];
    for(i=0;i<n;i++) {
        for(j=0;j<2;j++) {
            cin>>a[i][j]; } }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(j==i)
                continue
            if(a[i][0]==a[j][1])
                count++; } }
    cout<<count<<endl; }