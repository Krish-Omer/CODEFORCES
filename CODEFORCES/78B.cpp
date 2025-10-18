#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p=0;
    cin>>n;
    string s1="",s2="VIBGYOR";
    for(i=0;i<n/7;i++)
        s1=s1+s2;
    if(n%7==1)
        s1=s1+"G";
    if(n%7==2)
        s1=s1+"GY";
    if(n%7==3)
        s1=s1+"GYO";
    if(n%7==4)
        s1=s1+"VIBG";
    if(n%7==5)
        s1=s1+"VIBGY";
    if(n%7==6)
        s1=s1+"VIBGYO";
    cout<<s1;
}