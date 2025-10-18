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
        int i,n,pos;
        cin>>n;
        bool flag=false;
        vector<int> v1(n);
        for(i=0;i<n;i++)
        {
            cin>>v1[i];
            if(i!=0)
            {
                if(v1[i]<v1[i-1])
                {
                    flag=true;
                    pos=i;
                }
            }
        }
        if(flag==false)
            cout<<"NO"<<endl;
        else 
        {
            cout<<"YES"<<endl;
            cout<<2<<endl;
            cout<<v1[pos-1]<<" "<<v1[pos]<<endl;
        }
    }
}