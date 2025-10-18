#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,m,low,high;
    string s1;
    cin>>s1;
    vector<int> v1(s1.length());
    cin>>m;
    v1[0]=0;
    for(i=1;i<s1.length();i++)
    {
        if(s1[i]!=s1[i-1])
            v1[i]=v1[i-1]+1;
        else 
            v1[i]=v1[i-1];
    }
    for(i=0;i<m;i++)
    {
        cin>>low>>high;
        cout<<high-low-(v1[high-1]-v1[low-1])<<endl;
    }
}