#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,mini=INT_MAX;
    cin>>n>>k;  
    vector<int> v1(n),v2(n-k+1,0);
    for(i=0;i<n;i++)
        cin>>v1[i];
    for(j=0;j<k;j++)
        v2[0]=v2[0]+v1[j];
    for(i=1;i<n-k+1;i++)
        v2[i]=v2[i-1]+v1[j++]-v1[i-1];
    for(i=0;i<n-k+1;i++)
    {
        if(v2[i]<mini)
        {
            mini=v2[i];
            j=i;
        }
    }
    cout<<j+1;
}