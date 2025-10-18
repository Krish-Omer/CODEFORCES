#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    string s1,p,q,r;
    vector<string> v1;
    cin>>s1;
    int a[n-1]={1},count;
    for(i=0;i<n-1;i++)
    {
        p=s1[i];
        q=s1[i+1];
        r=p+q;
        v1.push_back(r);
    }
    int k=0,maxi=-1;
    for(i=0;i<v1.size();i++)
    {
        count=1;
        for(j=i+1;j<v1.size();j++)
        {
            if(v1[i]==v1[j])
            {
                count++;
                v1.erase(v1.begin()+j);
                j--;
            }
        }
        a[k]=count;
        k++;
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
            k=i;
        }
    }
    cout<<v1[k]<<endl;
}