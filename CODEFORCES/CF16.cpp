#include<bits/stdc++.h>
using namespace std;
string uppercase(string s1) {
    int i;
    for(i=0;i<s1.length();i++) {
        if(s1[i]>='a' && s1[i]<='z')
            s1[i]=s1[i]-32; }
    return s1; }
string lowercase(string s1) {
    int i;
    for(i=0;i<s1.length();i++) {
        if(s1[i]>='A' && s1[i]<='Z')
            s1[i]=s1[i]+32; }
    return s1; }
int main() {
    int i,j,cl=0,cu=0;
    string s1;
    cin>>s1;
    for(i=0;i<s1.length();i++) {
        if(s1[i]>='A' && s1[i]<='Z')
            cu++;
        if(s1[i]>='a' && s1[i]<='z')
            cl++; }
    if(cu>cl) {
        s1=uppercase(s1);
        cout<<s1<<endl; }    
    else {
        s1=lowercase(s1);
        cout<<s1<<endl; } }