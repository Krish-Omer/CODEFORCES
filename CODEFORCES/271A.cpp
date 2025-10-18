#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,i,a[4],k,l,count,j;
    cin>>y;
    for(i=y+1;;i++) {
        j=i; 
        for(k=0;k<4;k++) {
            a[k]=j%10;
            j=j/10; }
        count=0;
        for(k=0;k<4;k++) {
            for(l=0;l<4;l++) {
                if(a[k]==a[l])
                    count++; } }
        if(count==4) {
            cout<<i<<endl;
            break; } } }