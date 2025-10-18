#include<bits/stdc++.h>
using namespace std;
string lowercase(string s) {
    int i;
    for(i=0;i<s.length();i++) {
        if(s[i]<='Z' && s[i]>='A')
            s[i]=s[i]+32; }
    return s; }
int main() {
    string s1,s2;
    int i,j;
    cin>>s1;
    cin>>s2;
    s1=lowercase(s1);
    cout<<s1<<endl;
    s2=lowercase(s2);
    cout<<s2<<endl;
    for(i=0;i<s1.length();i++) {
        if(s1[i]>s2[i]) {
            cout<<"1"<<endl;
            exit(0); }
        if(s1[i]<s2[i]) {
            cout<<"-1"<<endl;
            exit(0); } }
    cout<<"0"<<endl; }