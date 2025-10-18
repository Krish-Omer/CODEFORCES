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
        int i,j,k,n;
        cin>>n;
        string s1;
        map<int,int> m1;
        bool flag=false;
        for(i=0;i<10;i++)
            m1[i]=0;
        for(i=0;i<n;i++)
        {
            cin>>s1;
            m1[s1[s1.length()-1]-'0']++;
        }
        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                for(k=0;k<10;k++)
                {
                    if((i+j+k==3)||(i+j+k==13)||(i+j+k==23))
                    {
                        if((i==j)&&(i==k)&&(m1[i]>2))
                        {
                            flag=true;
                            break;
                        }
                        else if((i==j)&&(i!=k)&&(m1[i]>1)&&(m1[k]>0))
                        {
                            flag=true;
                            break; 
                        }
                        else if((i==k)&&(i!=j)&&(m1[i]>1)&&(m1[j]>0))
                        {
                            flag=true;
                            break;
                        }
                        else if((k==j)&&(k!=i)&&(m1[j]>1)&&(m1[i]>0))
                        {
                            flag=true;
                            break;
                        }
                        else if((i!=j)&&(i!=k)&&(j!=k)&&(m1[i]>0)&&(m1[j]>0)&&(m1[k]>0))
                        {
                            flag=true;
                            break;
                        }
                        else 
                            flag=false;
                    }
                }
                if(flag)
                    break;
            }
            if(flag)
                break;
        }
        if(flag)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}