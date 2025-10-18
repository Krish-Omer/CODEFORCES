#include<bits/stdc++.h>
using namespace std;
int main() {
    int s[4],i,j,count=0;
    for(i=0;i<4;i++)
        cin>>s[i];
    for(i=0;i<4;i++) {
        for(j=i+1;j<4;j++) {
            if(s[i]==s[j])
                count++; } }
    cout<<count-4; }