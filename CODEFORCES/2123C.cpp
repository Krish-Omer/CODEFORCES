#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,f,s;
        string s1;
        cin>>n;
        vector<int> v1(n);
        vector<pair<int,int>> pp(n),sp(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        pp[0]={v1[0],v1[0]};
        sp[n-1]={v1[n-1],v1[n-1]};
        for(i=1;i<n;i++)
        {
            f=pp[i-1].first;
            s=pp[i-1].second;
            if(v1[i]<f)
                f=v1[i];
            if(v1[i]>s)
                s=v1[i];
            pp[i]={f,s};
            f=sp[n-i].first;
            s=sp[n-i].second;
            if(v1[n-1-i]<f)
                f=v1[n-1-i];
            if(v1[n-1-i]>s)
                s=v1[n-1-i];
            sp[n-1-i]={f,s};
        }
        for(i=0;i<n;i++)
        {
            if(v1[i]==pp[i].first||v1[i]==sp[i].second)
                s1.push_back('1');
            else 
                s1.push_back('0');
        }
        cout<<s1<<endl;
    }
}