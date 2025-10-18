#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,k,t;
    char a[6];
    cin>>t;
    for(k=0;k<t;k++) {
        for(i=0;i<6;i++)
            cin>>a[i];
        if((a[0]+a[1]+a[2])==(a[3]+a[4]+a[5]))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl; } }