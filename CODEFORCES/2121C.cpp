#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ts;
    cin>>ts;
    while(ts--)
    {
        int row,col,i,j,maxi=0,rd,cd;
        cin>>row>>col;
        vector<vector<int>> v1(row,vector<int>(col));
        map<pair<int,int>,bool> m1;
        pair<int,int> f,s,t;
        bool flag=true;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cin>>v1[i][j];
                maxi=max(maxi,v1[i][j]);
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(v1[i][j]==maxi)
                    m1[{i,j}]=true;
            }
        }
        if(m1.size()<=2)
        {
            cout<<maxi-1<<endl;
            continue;
        }
        f=(m1.begin())->first;
        s=(++m1.begin())->first;
        t=(++(++m1.begin()))->first;
        if(f.first==s.first)
        {
            rd=f.first;
            for(auto it:m1)
            {
                if(it.first.first!=rd)
                {
                    cd=it.first.second;
                    break;
                }
            }
        }
        else 
        {
            if(f.second==s.second)
            {
                cd=f.second;
                for(auto it:m1)
                {
                    if(it.first.second!=cd)
                    {
                        rd=it.first.first;
                        break;
                    }
                }
            }
            else if(s.first==t.first)
            {
                rd=s.first;
                cd=f.second;
            }
            else if(s.second==t.second)
            {
                cd=s.second;
                rd=f.first;
            }
            else if(f.second==t.second)
            {
                cd=f.second;
                rd=s.first;
            } 
            else 
                flag=false;
        }
        for(auto it:m1)
        {
            row=it.first.first;
            col=it.first.second;
            if(row!=rd && col!=cd)
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<maxi-1<<endl;
        else 
            cout<<maxi<<endl;
    }
}