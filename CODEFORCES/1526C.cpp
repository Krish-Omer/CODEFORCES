#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,i,sum=0,cnt=0;
    priority_queue<int,vector<int>,greater<int>> pq;
    cin>>n;
    vector<ll> v1(n);
    for(i=0;i<n;i++)
        cin>>v1[i];
    for(i=0;i<n;i++) 
    {
        sum+=v1[i];
        cnt++;
        if(v1[i]<0)
            pq.push(v1[i]);
        while(sum<0) 
        {
            sum-=pq.top();
            pq.pop();
            cnt--;
        }
    }
    cout<<cnt<<endl; 
}