#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,cnt=1,p;
        cin>>n;
        vector<int> v1(n);
        for(i=0;i<n;i++)
            cin>>v1[i];
        p=v1[0];
        for(i=1;i<n;i++)
        {
            if(p+1<v1[i])
            {
                cnt++;
                p=v1[i];
            }
        }
        cout<<cnt<<endl;
    }
}