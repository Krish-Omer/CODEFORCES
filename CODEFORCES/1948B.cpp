#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,fir,sec;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> v1(n);
        string s1,s2;
        bool ans=true;
        for(i=0;i<n;i++)
            cin>>v1[i];
        for(i=n-1;i>0;i--)
        {
            if(v1[i]<v1[i-1])
            {
                fir=v1[i-1]%10;
                sec=v1[i-1]/10;
                if(fir>v1[i]||sec>fir)
                {
                    ans=false;
                    break;
                }
                v1[i-1]=sec;
            }
        }
        if(ans)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}