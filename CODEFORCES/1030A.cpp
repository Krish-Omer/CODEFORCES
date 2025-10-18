#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,p,c=0,i;
    cin>>n;
    for(i=0;i<n;i++) {
        cin>>p;
        c=c+p; }
    if(c==0)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl; }