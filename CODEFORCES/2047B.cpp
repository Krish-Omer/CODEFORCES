#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,t,n;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>n;
        string s1;
        cin>>s1;
        int a[10]={0},i,j,maxp,minp,maxi=0,mini=11;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(s1[i]==s1[j])
                    a[i]++;
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
            if(a[i]>maxi)
            {
                maxi=a[i];
                maxp=i;
            }
            if(a[i]<mini)
            {
                mini=a[i];
                minp=i;
            }
        }
        cout<<endl<<mini<<" "<<minp<<endl;
        cout<<maxi<<" "<<maxp<<endl;
        s1[minp]=s1[maxp];
        cout<<s1<<endl;
    }
}