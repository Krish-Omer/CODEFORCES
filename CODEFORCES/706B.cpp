#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,low,high,mid,q,key;
    cin>>n;
    vector<int> v1(n);
    for(i=0;i<n;i++)
        cin>>v1[i];
    cin>>q;
    sort(v1.begin(),v1.end());
    for(i=0;i<q;i++)
    {
        cin>>key;
        if(key<v1[0])
            cout<<0<<endl;
        else if(key>=v1[n-1])
            cout<<n<<endl;
        else 
        {
            low=0;
            high=n-1;
            mid=(low+high)/2;
            while(high>=low)
            {
                if(v1[mid]<=key)
                    low=mid+1;
                else 
                    high=mid-1;
                mid=(low+high)/2;
            }
            cout<<low<<endl;
        }
    }
}