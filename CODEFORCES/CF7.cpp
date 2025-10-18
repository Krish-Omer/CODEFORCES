#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a[5][5],k=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                k=1;
                break;
            }
        }
        if(k==1)
            break;
    }
    cout<<(abs(i-2)+abs(j-2))<<endl;
}