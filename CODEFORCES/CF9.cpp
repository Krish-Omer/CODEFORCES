#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,j;
    string s1;
    cin>>s1;
    for(i=0;i<s1.length();i=i+2) {
        for(j=i+2;j<s1.length();j=j+2) {
            if(s1[i]>s1[j])
                swap(s1[i],s1[j]);  } }
    cout<<s1<<endl; }