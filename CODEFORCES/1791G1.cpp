#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c,i,p;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        cin>>n>>c;
        vector<int> v1(n);
        for(i=0;i<n;i++)
        {
            cin>>p;
            v1[i]=p+i+1;
        }
        sort(v1.begin(),v1.end());
        for(i=0;i<n;i++)
        {
            c=c-v1[i];
            if(c<0)
                break;
            cnt++;
        }
        cout<<cnt<<endl;
    }
}