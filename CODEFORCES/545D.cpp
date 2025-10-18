#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,cnt=0,sum=0;
    cin>>n;
    vector<int> v1(n),s1(n+1);
    for(i=0;i<n;i++)
        cin>>v1[i];
    sort(v1.begin(),v1.end());
    s1[0]=0;
    for(i=0;i<n;i++)
        s1[i+1]=s1[i]+v1[i];
    for(i=0;i<n;i++)
    {
        if(s1[i]-sum<=v1[i])
            cnt++;
        else 
            sum+=v1[i];
    }
    cout<<cnt<<endl;
}