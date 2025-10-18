#include<bits/stdc++.h>
using namespace std;
int main() {
    int k,r,i,count=0;
    cin>>k>>r;
    for(i=k;;i=i+k) {
        count++;
        if(i%10==r || i%10==0) {
            cout<<count<<endl;
            exit(0); } } }