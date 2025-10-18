#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,gcdf;
        cin>>n;
        vector<int> v1(n);
        for(i=0;i<n;i++)
        {
            cin>>v1[i];
            if(i==1)
                gcdf=gcd(v1[0],v1[1]);
            if(i>1)
                gcdf=gcd(gcdf,v1[i]);
        }
        int cntgcd=count(v1.begin(),v1.end(),gcdf);
        if(cntgcd>0)
            cout<<n-cntgcd<<endl;
        else 
        {
            int cnt=0;
            while(gcdf!=1 && cntgcd==0)
            {
                cnt++;
                for(i=0;i<n;i++)
                    v1[i]=v1[i]/gcdf;
                for(i=0;i<n;i++)
                {
                    if(i==1)
                        gcdf=gcd(v1[0],v1[1]);
                    if(i>1)
                        gcdf=gcd(gcdf,v1[i]);
                }
                cntgcd=count(v1.begin(),v1.end(),gcdf);
            }
            cout<<n+cnt<<endl;
        }
    }
}