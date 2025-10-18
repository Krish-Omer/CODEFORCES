#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long i,n,t1,t2,j,mini=INT_MAX,temp;
        cin>>n;
        vector<long long> v1(n);
        for(i=0;i<n;i++)
        {
            cin>>v1[i];
            if(i!=0)
            {
                if(abs(v1[i]-v1[i-1])<=1)
                    mini=0;
            }
        }
        if(mini==INT_MAX)
        {
            for(i=0;i<n-1;i++)
            {
                t1=INT_MAX;t2=INT_MAX;
                for(j=0;j<n;j++)
                {
                    if(j==i||j==i+1)
                        continue;
                    else if(j<i)
                    {
                        if((v1[j]<=max(v1[i],v1[i+1])+1)&&(v1[j]>=min(v1[i],v1[i+1])-1))
                            t1=i-j; 
                    }
                    else 
                    {
                        if((v1[j]<=max(v1[i],v1[i+1])+1)&&(v1[j]>=min(v1[i],v1[i+1])-1)&&(t2==INT_MAX))
                            t2=j-i-1; 
                    }
                }
                mini=min(mini,min(t1,t2));
            }
        }
        if(mini!=INT_MAX)
            cout<<mini<<endl;
        else    
            cout<<-1<<endl;
    }
}