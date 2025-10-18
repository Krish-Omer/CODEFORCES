#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long row,col,i,j;
        bool p,q,r,s;
        cin>>row>>col;
        long long arr[row][col];
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
                cin>>arr[i][j];
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                p=1;q=1;r=1;s=1;
                if(i+1==row)
                    p=0;
                if(i-1==-1)
                    q=0;
                if(j+1==col)
                    r=0;
                if(j-1==-1)
                    s=0;
                if(p && q && r && s)
                {
                    if((arr[i][j]>arr[i+1][j])&&(arr[i][j]>arr[i-1][j])&&(arr[i][j]>arr[i][j+1])&&(arr[i][j]>arr[i][j-1]))
                        arr[i][j]=max({arr[i+1][j],arr[i-1][j],arr[i][j+1],arr[i][j-1]});
                }
                else if(p && q && r)
                {
                    if((arr[i][j]>arr[i+1][j])&&(arr[i][j]>arr[i-1][j])&&(arr[i][j]>arr[i][j+1]))
                        arr[i][j]=max({arr[i+1][j],arr[i-1][j],arr[i][j+1]});
                }
                else if(p && q && s)
                {
                       if((arr[i][j]>arr[i+1][j])&&(arr[i][j]>arr[i-1][j])&&(arr[i][j]>arr[i][j-1]))
                        arr[i][j]=max({arr[i+1][j],arr[i-1][j],arr[i][j-1]});
                }
                else if(p && r && s)
                {
                    if((arr[i][j]>arr[i+1][j])&&(arr[i][j]>arr[i][j+1])&&(arr[i][j]>arr[i][j-1]))
                        arr[i][j]=max({arr[i+1][j],arr[i][j+1],arr[i][j-1]});
                }
                else if(q && r && s)
                {
                    if((arr[i][j]>arr[i-1][j])&&(arr[i][j]>arr[i][j+1])&&(arr[i][j]>arr[i][j-1]))
                        arr[i][j]=max({arr[i-1][j],arr[i][j+1],arr[i][j-1]});
                }
                else if(p && r)
                {
                    if((arr[i][j]>arr[i+1][j])&&(arr[i][j]>arr[i][j+1]))
                        arr[i][j]=max(arr[i+1][j],arr[i][j+1]);
                }
                else if(p && s)
                {
                    if((arr[i][j]>arr[i+1][j])&&(arr[i][j]>arr[i][j-1]))
                        arr[i][j]=max(arr[i+1][j],arr[i][j-1]);
                }
                else if(q && r)
                {
                    if((arr[i][j]>arr[i-1][j])&&(arr[i][j]>arr[i][j+1]))
                        arr[i][j]=max(arr[i-1][j],arr[i][j+1]);
                }
                else if(q && s)
                {
                    if((arr[i][j]>arr[i-1][j])&&(arr[i][j]>arr[i][j-1]))
                        arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
                }
                else if(p && q)
                {
                    if((arr[i][j]>arr[i][j+1])&&(arr[i][j]>arr[i][j-1]))
                        arr[i][j]=max(arr[i][j+1],arr[i][j-1]);
                }
                else if(r && s)
                {
                    if((arr[i][j]>arr[i][j+1])&&(arr[i][j]>arr[i][j-1]))
                        arr[i][j]=max(arr[i][j+1],arr[i][j-1]);
                }
                else if(p)
                {
                    if(arr[i][j]>arr[i+1][j])
                        arr[i][j]=arr[i+1][j];
                }
                else if(q)
                {
                    if(arr[i][j]>arr[i-1][j])
                        arr[i][j]=arr[i-1][j];
                }
                else if(r)
                {
                    if(arr[i][j]>arr[i][j+1])
                        arr[i][j]=arr[i][j+1];
                }
                else if(s)
                {
                    if(arr[i][j]>arr[i][j-1])
                        arr[i][j]=arr[i][j-1];
                }
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
                cout<<arr[i][j]<<" ";
            cout<<endl;
        }
    }
}