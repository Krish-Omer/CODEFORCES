#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,t,n,k,p,j;
    string s1;
    cin>>t;
    for(k=0;k<t;k++) {
        p=0;
        cin>>n;
        cin>>s1;
        for(i=2;i<448;i++) {
            if((i*i)==n) {
                p=i;
                break; } }
        if(p==0) {
            cout<<"NO"<<endl;
            continue; }
        char a[p][p];
        int k=0,sumt=0,srow1=0,srow2=0,scol1=0,scol2=0;
        for(i=0;i<p;i++) {
            for(j=0;j<p;j++) {
                a[i][j]=s1[k];
                k++;
                sumt=sumt+a[i][j]; } }
        for(i=0;i<p;i++) {
            srow1=srow1+a[0][i];
            srow2=srow2+a[p-1][i];
            scol1=scol1+a[i][0];
            scol2=scol2+a[i][p-1]; }
        if((sumt-(srow1+srow2+scol1+scol2-(4*('1'))))==(((p*p)-(4*(p-1)))*('0')))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl; } }