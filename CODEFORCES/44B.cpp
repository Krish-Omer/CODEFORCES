#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a,b,c,cnt=0,p,q;
    cin>>n>>a>>b>>c;
    for(i=0;i<=c;i++)
    {
        p=n-(2*i);
        if(p>=0)
        {
            for(j=0;j<=b;j++)
            {
                q=p-j;
                if(2*q<=a && q>=0)
                    cnt++;
            }
        }
        else 
            break;
    }
    cout<<cnt;
}