#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p,q;
    cin>>n;
    p=1;
    q=n*n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j%2==0)
            {
                cout<<p<<" ";
                p++;
            }
            else
            {
                cout<<q<<" ";
                q--;
            }
        }
        cout<<endl;
    }
}