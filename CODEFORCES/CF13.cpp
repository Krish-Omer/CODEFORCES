#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,n,count=0;
    cin>>n;
    string s1;
    cin>>s1;
    for(i=0;i<s1.length();i++) {
        if(s1[i]==s1[i+1]) {
            count++; } }
    cout<<count<<endl; } 