#include<bits./stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,maxi=0;
    cin>>n;
    vector<int> a(n);
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-2;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
                continue;
            for(k=0;k<n;k++)
            {
                if(k==i || k==j)
                    continue;
                if((a[i]+a[j])==a[k])
                {
                    cout<<k+1<<" "<<i+1<<" "<<j+1;
                    exit(0);
                }
                if((a[j]+a[k])==a[i])
                {
                    cout<<i+1<<" "<<k+1<<" "<<j+1;
                    exit(0);
                }
                if((a[i]+a[k])==a[j])
                {
                    cout<<j+1<<" "<<k+1<<" "<<i+1;
                    exit(0);
                }
            }
        }
    }
    cout<<-1;
}