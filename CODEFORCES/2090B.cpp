#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int row,col,i,j,k,p,q;
        cin>>row>>col;
        string str[row];
        char arr[row][col];
        for(i=0;i<row;i++)
        {
            cin>>str[i];
            for(j=0;j<str[i].length();j++)
                arr[i][j]=str[i][j];
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                q=0;
                if(arr[i][j]=='1')
                {
                    p=0;
                    for(k=0;k<i;k++)
                    {
                        if(arr[k][j]!='1')
                        {
                            p=1;
                            break;
                        }
                    }
                    if(p==1)
                    {
                        for(k=0;k<j;k++)
                        {
                            if(arr[i][k]!='1')
                            {
                                p=2;
                                break;
                            }
                        }    
                    }
                    if(p==2)
                    {
                        q=1;
                        break;
                    }
                }
            }
            if(q==1)
                break;
        }
        if(q==1)
            cout<<"NO"<<endl;
        else 
            cout<<"YES"<<endl;

    }
}