#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a1,k,i,j,p,maxi,mini,digit;
    cin>>t;
    while(t--)
    {
        p=0;
        string s1;
        cin>>a1>>k;
        if(k==1)
            cout<<a1<<endl;
        else 
        {
            for(i=2;;i++)
            {
                mini=9;maxi=0;
                s1=to_string(a1);
                for(j=0;j<s1.length();j++)
                {
                    if(s1[j]=='0')
                    {
                        p=1;
                        break;
                    }
                    digit=s1[j]-'0';
                    maxi=max(maxi,digit);
                    mini=min(mini,digit);
                }
                if(p==1)
                    break;
                a1=a1+maxi*mini;
                if(i==k)
                    break;
            }
            cout<<a1<<endl;
        }
    }
}