#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j,count;
    cin>>n>>t;
    string s1;
    cin>>s1;
    for(j=0;j<t;j++) {
        for(i=0;i<n;) {   
            count=1;     
            if(s1[i]=='B' && s1[i+1]=='G') {
            swap(s1[i],s1[i+1]);
            count=0; }
            if(count==0)
                i=i+2;
            else
                i++; } }
    cout<<s1<<endl; }