#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,d,i,low,high,mid,key,front,back,maxi=0;
    cin>>n>>d;
    vector<pair<long long,long long>> v1(n);
    vector<long long> v2(n+1);
    for(i=0;i<n;i++)
    {
        cin>>v1[i].first;
        cin>>v1[i].second;
    }
    sort(v1.begin(),v1.end());
    v2[0]=0;
    for(i=1;i<=n;i++)
        v2[i]=v2[i-1]+v1[i-1].second;
    for(i=0;i<n;i++)
    {
        // aage vle part me searching 
        low=i+1;
        high=n-1;
        key=v1[i].first+d;
        mid=(low+high)/2;
        while(low<=high)
        {
            if(v1[mid].first<key)
                low=mid+1;
            else 
                high=mid-1;
            mid=(low+high)/2;
        }
        front=mid;
        // peeche vle part me searching 
        low=0;
        high=i-1;
        key=v1[i].first-d;
        mid=(low+high)/2;
        while(low<=high)
        {
            if(v1[mid].first<=key)
                low=mid+1;
            else 
                high=mid-1;
            mid=(low+high)/2;
        }
        back=low;
        if(v1[front].first-v1[back].first>=d)
        {
            while(v1[front].first-v1[back].first>=d)
            {
                if(v1[front].second>v1[back].second)
                    back++;
                else 
                    front--;
            }
        }
        maxi=max(maxi,(v2[front+1]-v2[back]));
    } 
    cout<<maxi<<endl;
}