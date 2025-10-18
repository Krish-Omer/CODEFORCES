#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,s,e;
        cin>>n;
        vector<int> v1(n);
        for(i=0;i<n;i++)
            v1[i]=i+1;
        s=1;e=n-1;
        while(s<e)
        {
            swap(v1[s],v1[e]);
            s+=2;
            e--;
        }
        for(i=1;i<n-1;i=i+2)
        {
            if(v1[i]<v1[i+1]||v1[i]<v1[i-1])
                swap(v1[i],v1[i-1]);
        }
        for(i=0;i<n;i++)
            cout<<v1[i]<<" ";
        cout<<endl;
    }
}