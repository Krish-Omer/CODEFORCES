#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1;
    int i,j,count=0,k=0;
    cin>>s1;
    for(i=0;i<s1.length();i++) {
        k=0;
        for(j=0;j<i;j++) {
            if(s1[i]==s1[j])
                k=1; }
        if(k==0)
            count++; }
    if(count%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else 
        cout<<"IGNORE HIM!"<<endl; }