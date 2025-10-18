#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,x,y,i,j,k,count=0;
    string s1,s2="";
    cin>>n>>x>>y;
    cin>>s1;
    for(i=1;i<=x;i++) {
        if(i==(x-y))
            s2=s2+"1";
        else 
            s2=s2+"0"; }
    k=0;
    for(i=n-x;i<n;i++) {
        if(s1[i]!=s2[k])
            count++;
        k++; }
    cout<<count<<endl; }