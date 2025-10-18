#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,n,cnt=0;
    cin>>n;
    vector<int> v1(n);
    for(i=0;i<n;i++)
        cin>>v1[i];
    cin>>m;
    vector<int> v2(m);
    for(i=0;i<m;i++)
        cin>>v2[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(i=0;i<n;i++)
    {
        for(j=0;j<v2.size();j++)
        {
            if(v1[i]==v2[j]-1)
            {
                cnt++;
                v2.erase(v2.begin()+j,v2.begin()+j+1);
                break;
            }
            if(v1[i]==v2[j])
            {
                cnt++;
                v2.erase(v2.begin()+j,v2.begin()+j+1);
                break;    
            }
            if(v1[i]==v2[j]+1)
            {
                cnt++;
                v2.erase(v2.begin()+j,v2.begin()+j+1);
                break;
            }
        }
    }
    cout<<cnt<<endl;
}