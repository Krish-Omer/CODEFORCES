#include<bits/stdc++.h>
using namespace std;
int power3(int n) {
    int count3=0;
    while(n%3==0) {
        count3++;
        n=n/3; }
    return count3; }
int power2(int n) {
    int count2=0;
    while(n%2==0) {
        count2++;
        n=n/2; }
    return count2; }
int main() {
    int i,t,n,k;
    cin>>t;
    for(k=0;k<t;k++) {
        int c2=0,c3=0;
        cin>>n;
        if(n==1) {
            cout<<0<<endl;
            continue; }
        c2=power2(n);
        c3=power3(n);
        if((pow(2,c2)*pow(3,c3))!=n) 
            cout<<-1<<endl;
        else
        {
            if(c3<c2)
                cout<<-1<<endl;
            else
                cout<<(2*c3)-c2<<endl;
        } } }