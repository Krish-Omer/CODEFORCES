#include<bits/stdc++.h>
using namespace std;
string changecase(string s1)
{
    int i;
    if(s1[0]>64 && s1[0]<91)
        s1[0]=s1[0]+32;
    else
        s1[0]=s1[0]-32;
    for(i=1;i<s1.length();i++)
        s1[i]=s1[i]+32;
    return s1;
}
int main() {
    string s1,s2;
    int i,count=0;
    cin>>s1;
    for(i=1;i<s1.length();i++) {
        if(s1[i]>64 && s1[i]<91)
            count++; }
    if(count==(s1.length()-1))
        s1=changecase(s1);
    cout<<s1<<endl; }