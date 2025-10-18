#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1.length()+s2.length()!=s3.length()) {
        cout<<"NO";
        exit(0); }
    else {
    int a[26],b[26],c[26],d[26],i,j,count;
    for(i=65;i<=90;i++) {
        count=0;
        for(j=0;j<s1.length();j++) {
            if(s1[j]==i)
                count++; }
        a[65-i]=count; }
    for(i=65;i<91;i++) {
        count=0;
        for(j=0;j<s2.length();j++) {
            if(s2[j]==i)
                count++; }
        b[65-i]=count; } 
    for(i=65;i<91;i++) {
        count=0;
        for(j=0;j<s3.length();j++) {
            if(s3[j]==i)
                count++; }
        c[65-i]=count; } 
    for(i=0;i<26;i++) {
        d[i]=a[i]+b[i];
        if(d[i]!=c[i]) {
            cout<<"NO"<<endl;
            exit(0); } }
    cout<<"YES"<<endl; } }