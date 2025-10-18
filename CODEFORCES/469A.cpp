#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,p,i,j,count=0,k,q;
    cin>>n>>p;
    int a[p];
    for(i=0;i<p;i++) 
        cin>>a[i];
    cin>>q;
    int b[q];
    for(i=0;i<q;i++) 
        cin>>b[i];
    for(i=1;i<n+1;i++) 
    {
        k=0;
        for(j=0;j<p;j++) 
        {
            if(i==a[j]) 
            {
                k=1;
                count++;
                break; 
            }
        }
        if(k==1)
            continue;
        for(j=0;j<q;j++)
        {
            if(i==b[j])
            {
                count++;
                break;
            }
        } 
    }
    if(count==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl; }