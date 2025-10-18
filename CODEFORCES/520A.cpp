#include<bits/stdc++.h>
using namespace std;
string tolower(string s1) {
    int i;
    for(i=0;i<s1.length();i++) {
        if(s1[i]>='A' && s1[i]<='Z')
            s1[i]=s1[i]+32; }
    return s1; }
int main() {
    int n,i,j,count=0;
    string s1,s2;
    cin>>n;
    cin>> s1;
    s2=tolower(s1);
    for(j=97;j<=122;j++) {
        for(i=0;i<s2.length();i++) {
            if(s2[i]==j) {
            count++;
            break; } } }
    if(count>=26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}