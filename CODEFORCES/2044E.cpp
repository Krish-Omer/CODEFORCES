#include<bits/stdc++.h>
using namespace std;
int main()
{
    int z,t;
    cin>>t;
    for(z=0;z<t;z++)
    {
        long long l1,l2,r1,r2,k,i,j,cnt=0,p,q,val,x,y,mini,maxi;
        cin>>k>>l1>>r1>>l2>>r2;
        vector<int> v1;
        if(l2%r1==0)
            p=l2/r1;
        else 
            p=l2/r1+1;
        q=r2/l1+1;
        for(i=0;;i++)
        {
            val=pow(k,i);
            if(val>=p && val<=q)
                v1.push_back(val);
            if(val>q)
                break;
        }
        for(i=0;i<v1.size();i++)
        {
            if(l2%v1[i]==0)
                p=l2/v1[i];
            else 
                p=l2/v1[i]+1;
            q=r2/v1[i];
            mini=max(p,l1);
            maxi=min(q,r1);
            if((maxi>0)&&(mini>0)&&(maxi>=mini))
                cnt=cnt+(maxi-mini+1);
            else 
                break;
        }
        cout<<cnt<<endl;
    }
}