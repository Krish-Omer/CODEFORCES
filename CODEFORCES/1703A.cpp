#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,i;
    cin>>t;
    string s1[t];
    for(i=0;i<t;i++) {
        cin>>s1[i];
        if(s1[i]=="YES"||s1[i]=="YEs"||s1[i]=="YeS"||s1[i]=="yES"||s1[i]=="Yes"||s1[i]=="yEs"||s1[i]=="yeS"||s1[i]=="yes")
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl; } }