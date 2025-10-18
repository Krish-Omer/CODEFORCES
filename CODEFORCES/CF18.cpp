#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,c1=0;
    cin>>n;
    for(i=0;n!=0;i++) {
        if(n%10==4 || n%10==7)
            c1++;
        n=n/10; }
    if(c1==4 || c1==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}