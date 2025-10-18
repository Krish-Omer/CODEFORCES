#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    string s1;
    cin>>t;
    while(t--)
    {
        stack<char> st;
        cin>>n;
        cin>>s1;
        for(i=0;i<n;i++)
        {
            if(s1[i]=='(')
                st.push(s1[i]);
            else 
            {
                if((!st.empty())&&(st.top()=='('))
                    st.pop();
                else 
                    st.push(s1[i]);
            }
        }
        cout<<st.size()/2<<endl;
    }
}