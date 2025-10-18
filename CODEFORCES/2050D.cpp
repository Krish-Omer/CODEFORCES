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
        int i,n,j,maxi,maxipos;
        string s1,s2;
        cin>>s1;
        n=s1.length();
        for(i=0;i<n;i++)
        {
            maxi=s1[i]-'0';
            maxipos=i;
            for(j=0;j<10;j++)
            {
                if(i+j+1<n)
                {
                    if(s1[i+j+1]-'0'-j-1>maxi)
                    {
                        maxi=s1[i+j+1]-'0'-j-1;
                        maxipos=i+j+1;
                    }
                    if(s1[i+j+1]=='9')
                        break; 
                }
                else 
                    break;
            }
            s2.push_back('0'+maxi);
            for(j=maxipos;j>i;j--)
                swap(s1[j],s1[j-1]);
        }
        cout<<s2<<endl;
    }
}