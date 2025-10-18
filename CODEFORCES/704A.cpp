#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    cout.tie(nullptr);
    int n,q,i,cnt=0,t1,t2,j,maxi=0;
    cin>>n>>q;
    vector<int> v1(n+1,0);
    vector<pair<int,bool>> v2;
    for(i=0;i<q;i++)
    {
        cin>>t1>>t2;
        if(t1==1)
        {
            v2.push_back({t2,false});
            v1[t2]++;
            cnt++;
            cout<<cnt<<endl;
        }
        else if(t1==2)
        {
            cnt=cnt-v1[t2];
            v1[t2]=0;
            cout<<cnt<<endl;
            for(j=0;j<v2.size();j++)
            {
                if(v2[j].first==t2)
                    v2[j].second=true;
            }
        }
        else 
        {
            if(t2>maxi)
            {
                for(j=maxi;j<t2;j++)
                {
                    if(v2[j].second==false)
                    {
                        v2[j].second=true;
                        cnt--;
                        v1[v2[j].first]--;
                    }
                }
                maxi=t2;
            }
            cout<<cnt<<endl;
        }
    }
}