#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,t;
    cin>>t;
    for(l=0;l<t;l++)
    {
        string s1;
        long long n,k,cnt=0,p=0,i,q;
        cin>>n>>k;
        cin>>s1;
        vector<long long> v1;
        for(i=0;i<n;i++)
        {
            if(s1[i]=='0')
                v1.push_back(i);
        }
        for(i=0;i<v1.size();i++)
        {
            cnt=cnt+v1[i]-i;
            if(cnt<=k)
            {
                swap(s1[v1[i]],s1[p]);
                p++;
                if(cnt==k)
                    break;
            }
            else 
            {
                q=cnt-k;
                if(p+q<n)
                    swap(s1[p+q],s1[v1[i]]);
                break;
            }
        }
        cout<<s1<<endl;
    }
}