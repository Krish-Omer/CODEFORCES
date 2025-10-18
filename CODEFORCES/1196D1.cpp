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
        ll i,j,n,k,maxi=1,cnt=0,tmp=0,pat;
        char ch;
        cin>>n>>k;
        string s1;
        cin>>s1;
        for(j=0;j<=n-k;j++)
        {
            for(pat=0;pat<3;pat++)
            {
                tmp=0;
                for(i=j;i<j+k;i++)
                {
                    if(pat==0)
                    {
                        if(tmp%3==0 && s1[i]=='R')
                            cnt++;
                        if(tmp%3==1 && s1[i]=='G')
                            cnt++;
                        if(tmp%3==2 && s1[i]=='B')
                            cnt++;
                    }
                    else if(pat==1)
                    {
                        if(tmp%3==0 && s1[i]=='G')
                            cnt++;
                        if(tmp%3==1 && s1[i]=='B')
                            cnt++;
                        if(tmp%3==2 && s1[i]=='R')
                            cnt++;
                    }
                    else 
                    {
                        if(tmp%3==0 && s1[i]=='B')
                            cnt++;
                        if(tmp%3==1 && s1[i]=='R')
                            cnt++;
                        if(tmp%3==2 && s1[i]=='G')
                            cnt++;
                    }
                    tmp++;
                    if(tmp==3)
                        tmp=0;
                }
                maxi=max(maxi,cnt);
                cnt=0;
            }
        }
        cout<<k-maxi<<endl;
    }
}