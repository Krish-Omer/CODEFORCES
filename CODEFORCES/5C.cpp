#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    stack<int> st;
    int len,cnt=0,i,maxlen=0,p=0;
    vector<pair<int,int>> v1,v2,v3;
    for(i=0;i<s1.length();i++)
    {
        if(s1[i]=='(')
            st.push(i);
        else 
        {
            if(!st.empty())
            {  
                p=1; 
                v1.push_back({st.top(),i});
                st.pop();
            }
        }   
    }
    if(p==1)
    {
        sort(v1.begin(),v1.end());
        v2.push_back(v1[0]);
        p=0;
        for(i=1;i<v1.size();i++)
        {
            if(!((v1[i].first<v2[p].second)&&(v1[i].second<v2[p].second)))
            {
                v2.push_back(v1[i]);
                p++;
            }
        }
        v3.push_back(v2[0]);
        p=0;
        for(i=1;i<v2.size();i++)
        {
            if(v3[p].second+1==v2[i].first)
                v3[p].second=v2[i].second;
            else 
            {
                v3.push_back(v2[i]);
                p++;
            }
        }
        for(i=0;i<v3.size();i++)
        {
            len=v3[i].second-v3[i].first+1;
            if(len>maxlen)
                maxlen=len;
        }
        for(i=0;i<v3.size();i++)
        {
            if(v3[i].second-v3[i].first+1==maxlen)
                cnt++;
        }
        cout<<maxlen<<" "<<cnt<<endl;
    }
    else 
        cout<<0<<" "<<1<<endl;
}