#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,i,p,s,e,cnt=0;
        string s1;
        cin>>n;
        vector<long long> presum(n+1),left,right;
        vector<pair<long long , long long>> v1;
        presum[0]=0;
        for(i=1;i<=n;i++)
        {
            cin>>p; 
            presum[i]=presum[i-1]+p;
        }
        cin>>s1;
        for(i=0;i<s1.length();i++)
        {
            if(s1[i]=='L')
                left.push_back(i+1);
            else 
                right.push_back(i+1);
        }
        s=0;e=right.size()-1;
        while(s<left.size() && e>=0 && left[s]<right[e])
            v1.push_back({left[s++],right[e--]});
        for(i=0;i<v1.size();i++)
            cnt+=presum[v1[i].second]-presum[v1[i].first-1];
        cout<<cnt<<endl;
    }
}