#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,cnt=0,p=1,q=1;
        bool arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        map<int,vector<pair<int,int>>> m1;
        for(i=0;i<n;i++)
        {
            if(!arr[i])
            {
                cnt++;
                m1[cnt].push_back({p,q});
                cout<<p<<" "<<q<<endl;
            }
            else 
            {
                
            }
        }
    }
}