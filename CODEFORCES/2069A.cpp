#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,t;
    cin>>t;
    for(k=0;k<t;k++)
    {
        int n,i,p=0;
        cin>>n;
        int a[n];
        for(i=0;i<n-2;i++)
            cin>>a[i];
        for(i=0;i<n-4;i++)
        {
            if((a[i]==1)&&(a[i+1]==0)&&(a[i+2]==1))
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"NO"<<endl;
        else 
            cout<<"YES"<<endl;
    }
}