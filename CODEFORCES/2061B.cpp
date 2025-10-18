#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long i,n,e,b1,b2,p=0,q=0,e1,e2,pos;
        cin>>n;
        vector<long long> v1;
        set<long long> s1;
        for(i=0;i<n;i++)
        {
            cin>>e;
            v1.push_back(e);
            s1.insert(e);
        }
        sort(v1.begin(),v1.end());
        if(s1.size()==n)
            cout<<-1<<endl;
        else if(s1.size()==n-1)
        {
            for(i=0;i<n-1;i++)
            {
                if(v1[i]==v1[i+1])
                {
                    e=v1[i];
                    pos=i;
                    break;
                }
            }
            v1.erase(v1.begin()+pos,v1.begin()+pos+2);
            for(i=0;i<v1.size()-1;i++)
            {
                b1=v1[i];
                b2=v1[i+1];
                if(abs(b2-e)<(b1+e))
                {
                    cout<<e<<" "<<e<<" "<<b1<<" "<<b2<<endl;
                    p=1;
                    break;
                }
            }
            if(p==0)
                cout<<-1<<endl;
        }
        else if(s1.size()==n-2)
        {
            for(i=0;i<n-1;i++)
            {
                if((v1[i]==v1[i+1])&&(p==0))
                {
                    pos=i;
                    e1=v1[i];
                    i++;
                    p=1;
                }
                else 
                {
                    if((v1[i]==v1[i+1])&&(p==1))
                    {
                        e2=v1[i];
                        q=1;
                        break;
                    }
                }
            }
            if(q==1)
                cout<<e1<<" "<<e2<<" "<<e1<<" "<<e2<<endl;
            else 
            {
                v1.erase(v1.begin()+pos,v1.begin()+pos+2);
                p=0;
                for(i=0;i<v1.size()-1;i++)
                {
                    b1=v1[i];
                    b2=v1[i+1];
                    if(abs(b2-e1)<(b1+e1))
                    {
                        cout<<e1<<" "<<e1<<" "<<b1<<" "<<b2<<endl;
                        p=1;
                        break;
                    }
                }
                if(p==0)
                    cout<<-1<<endl;    
            }
        }
        else 
        {
            for(i=0;i<n-1;i++)
            {
                if((v1[i]==v1[i+1])&&(p==0))
                {
                    i++;
                    cout<<v1[i]<<" "<<v1[i]<<" ";
                    p=1;
                }
                else 
                {
                    if((v1[i]==v1[i+1])&&(p==1))
                    {
                        cout<<v1[i]<<" "<<v1[i]<<endl;
                        break;
                    }
                }
            }
        }
    }
}