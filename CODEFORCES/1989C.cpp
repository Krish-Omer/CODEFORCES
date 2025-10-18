#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,t;
    cin>>t;
    for(k=0;k<t;k++)
    {
        int m1=0,m2=0,cn=0,cp=0,p,q,r,n,i;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        for(i=0;i<n;i++)
        {
            if(a[i]>b[i])
                m1+=a[i];
            if(b[i]>a[i])
                m2+=b[i];
            if(a[i]==b[i])
            {
                if(a[i]==1)
                    cp++;
                if(a[i]==-1)
                    cn++;
            }
        }
        if(m1==0 && m2==0)
        {
            if(cp==cn)
                cout<<0<<endl;
            if(cp>cn)
                cout<<(cp-cn)/2<<endl;
            if(cn>cp)
            {
                if((cn-cp)%2==0)
                    cout<<(cp-cn)/2<<endl;
                else 
                    cout<<((cp-cn)/2)-1<<endl;
            }
        }
        else if((m1==0 && m2>=1))
        {
            if(cp==0)
            {
                if(cn==0)
                    cout<<0<<endl;
                else 
                {
                    p=m2-cn;     
                    if(p>=0)
                        cout<<0<<endl;
                    else 
                    {
                        if(p%2==0)
                            cout<<p/2<<endl;
                        else 
                            cout<<p/2-1<<endl;
                    }
                }
            }
            else 
            {
                m1=cp;
                p=m1+m2-2-cn;   // m1=m2=1
                if(p>=0)
                    cout<<1<<endl;
                else 
                {
                    if(p==-1 || p==-2)
                        cout<<0<<endl;
                    else 
                        cout<<-1<<endl;
                }
            }
        }    
        else if((m2==0 && m1>=1))
        {
            if(cp==0)
            {
                if(cn==0)
                    cout<<0<<endl;
                else 
                {
                    p=m1-cn;
                    if(p>=0)
                        cout<<0<<endl;
                    else 
                        cout<<-1<<endl;
                }
            }
            else 
            {
                m2=cp;
                p=m1+m2-2-cn;   // m1=m2=1
                if(p>=0)
                    cout<<1<<endl;
                else 
                {
                    if(p==-1 || p==-2)
                        cout<<0<<endl;
                    else 
                        cout<<-1<<endl;
                }
            }
        }
        else if((m1>=1) && (m2>=1))
        {
            if(cp>=cn)
                cout<<1<<endl;
            else 
            {
                p=cn-cp;
                q=m1+m2-2;
                if(q>=p)
                    cout<<1<<endl;
                else 
                {
                    if(p-q==1 || p-q==2)
                        cout<<0<<endl;
                    else 
                        cout<<-1<<endl;
                }
            }
        }
        else {}
    }
}