#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,sum,i,p;
    string smax,smin;
    cin>>len>>sum;
    if(sum==0&&len==1)
        cout<<0<<" "<<0;
    else if(sum==0||sum>9*len)
        cout<<-1<<" "<<-1;
    else 
    {
        for(i=0;i<sum/9;i++)
            smax.push_back('9');
        if(sum%9==0)
            p=0;
        else 
        {
            p=1;
            smax.push_back('0'+(sum%9));
        }
        for(i=0;i<(len-sum/9-p);i++)
            smax.push_back('0');
        smin=smax;
        if(smax[len-1]!='0')
            reverse(smin.begin(),smin.end());
        else 
        {
            for(i=len-1;i>=0;i--)
            {
                if(smin[i]!='0')
                    break;
            }
            smin[len-1]='1';
            smin[i]=smin[i]-1;
            reverse(smin.begin(),smin.end());
        }
        cout<<smin<<" "<<smax;
    }
}