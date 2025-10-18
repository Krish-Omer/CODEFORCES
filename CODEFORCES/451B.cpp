#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,q=0,i,start,last;
    cin>>n;
    last=n-1;
    start=0;
    vector<int> v1(n),v2(n);
    for(i=0;i<n;i++)
    {
        cin>>v1[i];
        v2[i]=v1[i];
    }
    sort(v2.begin(),v2.end());
    p=0;
    for(i=0;i<n;i++)
    {
        if(v1[i]!=v2[i])
        {
            p=1;
            break;
        }
    }
    if(p==0)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        if(v1[i]!=v2[i])
        {
            start=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(v1[i]!=v2[i])
        {
            last=i;
            break;
        }    
    }
    p=start;
    q=last;
    for(i=0;i<(last-start+1)/2;i++)
        swap(v1[p++],v1[q--]);
    p=0;
    for(i=0;i<n;i++)
    {
        if(v1[i]!=v2[i])
        {
            p=1;
            break;
        }
    }
    if(p==1)
        cout<<"no"<<endl;
    else 
    {
        cout<<"yes"<<endl;
        cout<<start+1<<" "<<last+1<<endl;
    }
}