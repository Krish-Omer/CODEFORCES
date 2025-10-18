#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll k,x,tmp,i;
        float t1;
        cin>>k>>x;
        vector<int> v1;
        t1=pow(2,k);
        tmp=(ll)t1;
        while(tmp!=x)
        {
            if(tmp>x)
            {
                v1.push_back(1);
                tmp=tmp/2;
            }
            else 
            {
                v1.push_back(2);
                x=(x-tmp)*2;
            }
        }
        reverse(v1.begin(),v1.end());
        cout<<v1.size()<<endl;
        for(i=0;i<v1.size();i++)
            cout<<v1[i]<<" ";
        cout<<endl;
    }
}