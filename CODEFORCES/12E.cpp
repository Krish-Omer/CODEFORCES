#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int i,j,k,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        if(i>=(n/2))
            k=n-1;
        else 
            k=1;
        for(j=0;j<n;j++)
        {
            if(i==j)
                cout<<"0 ";
            else 
            {
                if(i>=(n/2))
                {
                    cout<<k<<" ";
                    k--;
                }
                else 
                {
                    cout<<k<<" ";
                    k++;
                }
            }
        }
        cout<<endl;
    }
}