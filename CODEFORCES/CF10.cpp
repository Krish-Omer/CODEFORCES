#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1;
    cin>>s1;
    if(s1[0]<='z' && s1[0]>='a')
        s1[0]=s1[0]-32;
    cout<<s1<<endl; }