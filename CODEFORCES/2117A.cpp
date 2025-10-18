#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,i,j;
        cin>>n>>x;
        bool flag=true;
        vector<int> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        for(i=0;i<n;i++)
        {
            if(v1[i]==1)
            {
                for(j=0;j<min(x,n);j++)
                {
                    if(v1[i+j]==1)
                        v1[i+j]=0;
                }
                break;
            }
        }
        for(i=0;i<n;i++)
        {
            if(v1[i]==1)
            {
                cout<<"NO"<<endl;
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
    }
}