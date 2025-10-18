#include <bits/stdc++.h>
using namespace std;
int main()
{
    double t,m,i,p,q,j;
    long long n;
    cin>>t;
    while(t--)
    {
        vector<double> v1;
        vector<double> v2;
        v1.push_back(0);
        cin>>n>>m;
        p=n;
        i=1;
        while(n%3==0)
        {
            n=n/3;
            v1.push_back(i++);
        }
        v2.push_back(p);
        for(i=1;i<v1.size();i++)
        {
            q=p/(pow(3,v1[i]));
            for(j=0;j<=v1[i];j++)
                v2.push_back(q*pow(2,j));
        }
        for(i=0;i<v2.size();i++)
        {
            if(m==v2[i])
            {
                cout<<"YES"<<endl;
                p=-1;
                break;
            }
        }
        if(p!=-1)
            cout<<"NO"<<endl;
    }
}