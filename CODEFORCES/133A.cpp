#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1;
    cin>>s1;
    int i;
    for(i=0;i<s1.length();i++) {
        if(s1[i]=='H'||s1[i]=='Q'||s1[i]=='+'||s1[i]=='9') {
            cout<<"YES"<<endl;
            exit(0); } }
    cout<<"NO"<<endl; }