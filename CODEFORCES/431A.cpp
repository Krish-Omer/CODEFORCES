#include<bits/stdc++.h>
using namespace std;
int main() {
    int a1,a2,a3,a4,sum=0,i;
    string s1;
    cin>>a1>>a2>>a3>>a4;
    cin>>s1;
    for(i=0;i<s1.length();i++) {
        if(s1[i]=='1')
        sum=sum+a1;
        if(s1[i]=='2')
        sum=sum+a2;
        if(s1[i]=='3')
        sum=sum+a3;
        if(s1[i]=='4')
        sum=sum+a4; }
    cout<<sum<<endl; }