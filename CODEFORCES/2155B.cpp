#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i,j,cnt=0;
        cin>>n>>k;
        if((n*n)-k==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        vector<vector<char>> grid(n,vector<char>(n,'X'));
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(cnt==k)
                {
                    if(grid[i][j]!='X')
                        continue;
                    if(j+1<n)
                    {
                        grid[i][j]='R';
                        grid[i][j+1]='L';
                    }
                    else 
                    {
                        if(grid[i][j-1]=='U')
                        {
                            grid[i][j]='D';
                            grid[i+1][j]='U';
                        }
                        else 
                            grid[i][j]='L';
                    }
                }
                else 
                {
                    grid[i][j]='U';
                    cnt++;
                }
            }
        }
        cout<<"YES"<<endl;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<grid[i][j];
            cout<<endl;
        }
    }
}