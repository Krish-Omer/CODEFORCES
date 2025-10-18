#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,j,k,count,l;
    cin>>n;
    char i;
    string s[n];
    int a[26];
    for(j=0;j<n;j++)
        cin>>s[j];
    for(j=0;j<n;j++) {
        l=0;
        for(i='A';i<='Z';i++) {
            count=0;
            for(k=0;k<s[j].length();k++) {
                if(i==s[j][k]) 
                    count++; }
            if(j!=0) 
            a[l]=a[l]+count;
            else 
                a[l]=count;
            l++; } }
    int maxi=0;
    for(k=0;k<26;k++) {
        if(a[k]>maxi)
            maxi=a[k]; } 
    for(k=0;k<26;k++) {
        if(a[k]==maxi)
            cout<<char(65+k); } }