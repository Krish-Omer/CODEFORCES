#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int cnt1=0,diff1,diff2,intsize,n,m,k,i;
        cin>>n>>m>>k;
        vector<int> v1(n),v2(m);
        set<int> m1;
        for(i=0;i<n;i++)
            cin>>v1[i];
        for(i=0;i<m;i++)
            cin>>v2[i];
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        i=0;
        while(v1[i]<=k && i<n)
            m1.insert(v1[i++]);
        intsize=m1.size();
        if(intsize<(k/2))
            cout<<"NO"<<endl;
        else 
        {
            diff1=intsize-(k/2);
            i=0;
            while(v2[i]<=k && i<m)
            {
                if(!m1.count(v2[i]))
                    m1.insert(v2[i++]);
                else 
                {
                    if((i!=0 && v2[i-1]!=v2[i])||(i==0))
                        cnt1++;
                    i++;
                }
            }
            diff2=m1.size()-intsize;
            if((m1.size()==k)&&(((k/2)-diff2)==diff1)&&(cnt1>=((k/2)-diff2)))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}