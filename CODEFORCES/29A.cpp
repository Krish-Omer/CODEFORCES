#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p,j;
    cin>>n;
    int pos[n],spitdis[n];
    for(i=0;i<n;i++)
        cin>>pos[i]>>spitdis[i];
    for(i=0;i<n;i++)
    {
        p=pos[i]+spitdis[i];
        for(j=0;j<n;j++)
        {
            if(pos[j]==p && ((pos[j]+spitdis[j])==pos[i]) )
            {
                cout<<"YES";
                exit(0);
            }
        }
    }
    cout<<"NO";
}