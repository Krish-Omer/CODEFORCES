#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,n;
    string s5="";
    cin>>n;
    for(i=0;i<n;i++) {
        if(i%2==0)
            s5.append("I hate ");
        else
            s5.append("I love ");
        if(i==n-1) {
            s5.append("it ");
            cout<<s5;
            exit(0); }
        s5.append("that "); } }