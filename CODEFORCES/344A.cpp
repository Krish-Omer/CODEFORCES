#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,group=1;
    cin>>n;
    string s1[n];
    for(i=0;i<n;i++) 
        cin>>s1[i]; 
    for(i=0;i<n;i++) {
        if(i>0) {
            if(s1[i][0]==s1[i-1][1])
            group++; } }
    cout<<group<<endl; }