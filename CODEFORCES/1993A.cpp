#include<bits/stdc++.h>
using namespace std;
int main() {
    int k,t,n,i;
    string s1;
    cin>>t;
    for(k=0;k<t;k++) {
        int ca=0,cb=0,cc=0,cd=0;
        cin>>n;
        cin>>s1;
        for(i=0;i<(4*n);i++) {
            switch(s1[i]) {
                case 'A' : ca++;
                break;
                case 'B' : cb++;
                break;
                case 'C' : cc++;
                break;
                case 'D' : cd++;
                break; } }  
        if(ca>n)
            ca=n;
        if(cb>n)
            cb=n;
        if(cc>n)
            cc=n;
        if(cd>n)
            cd=n;
        cout<<ca+cb+cc+cd<<endl; } }