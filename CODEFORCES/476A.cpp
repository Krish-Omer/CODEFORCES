#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,low,high,i;
    cin>>n>>m;
    if(n%2==0) {
        low=n/2;
        high=n;
        for(i=low;i<=high;i++) {
            if(i%m==0) {
                cout<<i<<endl;
                exit(0); } } }
    else {
        low=n/2+1;
        high=n;
        for(i=low;i<=high;i++) {
            if(i%m==0) {
                cout<<i<<endl;
                exit(0); } } }
    cout<<-1<<endl; }