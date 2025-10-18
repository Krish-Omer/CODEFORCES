#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,p,count=0,j,q=0,g;
    cin>>n>>k;
    int a[n],b[n],cnt[5001]={0};
    for(i=0;i<n;i++)
    {
        cin>>p;
        b[i]=p;
        a[i]=p;
        cnt[p]++;
    }
    sort(a,a+n);
    for(i=1;i<5001;i++)
    {
        if(cnt[i]>k)
        {
            g=1;
            break;
        }
        else 
            g=0;
    }
    if(g==1)
    {
        cout<<"NO";
        exit(0);
    }
    cout<<"YES"<<endl;
    for(i=0;i<n;i++)
    {
        p=b[i];
        count=0;
        q=1;
        for(j=0;j<n;j++)
        {
            if(a[j]==p)
                count++;
            if(count==cnt[p])
            {
                cout<<q<<" ";
                break;
            }
            q++;
            if(q>k)
                q=1;
        }
        cnt[p]--;
    }
}