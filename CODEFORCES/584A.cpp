#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,t,i;
    string s1="252",s2="0";
    cin>>n>>t;
    if(n<4) {
        for(i=pow(10,n-1)+1;i<pow(10,n);i++) {
            if(i%t==0) {
                cout<<i<<endl;
                exit(0);
            } }
        cout<<-1<<endl; }
    else {
        for(i=0;i<n-3;i++)
            s1=s1+s2;
        cout<<s1<<endl; } }