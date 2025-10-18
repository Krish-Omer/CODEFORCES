#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p=0,cost,quality;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>cost>>quality;
        if(cost!=quality)
            p=1;
    }
    if(p==1)
        cout<<"Happy Alex";
    else 
        cout<<"Poor Alex";
}