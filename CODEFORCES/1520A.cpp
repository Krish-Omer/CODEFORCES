#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,t;
    cin>>t;
    for(x=0;x<t;x++)
    {
        int n,i,j,k,p=0;
        cin>>n;
        string s1;
        cin>>s1;
        for(i=0;i<n-1;i++)
        {
            j=i+1;
            while(s1[i]==s1[j])
                j++;
            for(k=j;k<n;k++)
            {
                if(s1[k]==s1[i])
                {
                    cout<<"NO"<<endl;
                    p=1;
                    break;
                }
            }
            if(p==1)
                break;
        }
        if(p==0)
            cout<<"YES"<<endl;
    }
}