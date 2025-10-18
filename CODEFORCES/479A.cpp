#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,i,maxi=0;
    cin>>a>>b>>c;
    int k[6];
    k[0]=a+b+c;
    k[1]=a*b*c;
    k[2]=(a*b)+c;
    k[3]=a*(b+c);
    k[4]=a+(b*c);
    k[5]=(a+b)*c;
    for(i=0;i<6;i++)
        maxi=max(maxi,k[i]);
    cout<<maxi<<endl; }