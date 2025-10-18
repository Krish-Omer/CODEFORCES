#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        string s1;
        for(i=0;i<k;i++)
            s1.push_back('1');
        for(i=k;i<n;i++)
            s1.push_back('0');
        cout<<s1<<endl;
    }
}