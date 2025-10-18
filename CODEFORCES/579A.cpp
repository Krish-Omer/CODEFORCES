#include<bits/stdc++.h>
using namespace std;
int maxpower(int n,int k) {
    int i;
    for(i=1;;i++) {
        if(pow(2,i)>n)
            break; }
    return i-1; }
int main() {
    int n,count=0;
    cin>>n;
    if(n==1 || n==2)
        count++;
    else {
        while(n>2) {
            count++;
            n=n-pow(2,maxpower(n,2)); }
        if(n==2 || n==1)
            count++; }
    cout<<count<<endl; }