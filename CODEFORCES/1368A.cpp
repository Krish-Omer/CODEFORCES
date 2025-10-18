#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,t,j,a,b,n;
    cin>>t;
    for(i=0;i<t;i++) {
        cin>>a;
        cin>>b;
        cin>>n;
        for(j=1; ;j++) {
            if(a>b)
                b=b+a;
            else
                a=a+b;
            if(a>n||b>n) {
                cout<<j<<endl;
                break; } } } }