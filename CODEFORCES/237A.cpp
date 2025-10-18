#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,p,q,maxi=1;
    cin>>n;
    map<pair<int,int>,int> m1;
    for(i=0;i<n;i++)
    {
        cin>>p>>q;
        if(m1.count({p,q}))
        {
            m1[{p,q}]++;
            maxi=max(maxi,m1[{p,q}]);
        }
        else 
            m1[{p,q}]=1;
    }
    cout<<maxi<<endl;
}