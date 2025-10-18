#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,x,i;
    cin>>t;
    while(t--)
    {
        long long spaces=0;
        cin>>n>>x;
        vector<long long> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        sort(v1.begin(),v1.end());
        for(i=0;i<n-1;i++)
            spaces=spaces+v1[n-1]-v1[i];
        if(spaces<=x)
            cout<<v1[n-1]+((x-spaces)/n)<<endl;
        else 
        {
            for(i=1;i<n;i++)
            {
                if((x-(v1[i]-v1[i-1])*i)<=0)
                    break;
                x=x-((v1[i]-v1[i-1])*i);
            }
            if((x-(v1[i]-v1[i-1])*i)==0)
                cout<<v1[i]<<endl;
            else 
                cout<<v1[i-1]+(x/i)<<endl;
        }
    }
}