#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    vector<ll> v1={9,189,2889,38889,488889,5888889,68888889,788888889,8888888889,98888888889,1088888888889,11888888888889,128888888888889,1388888888888889};
    cin>>t;
    while(t--)
    {
        ll k,i,ans=0,digpass=0,digrem,num,ansmod,j,p10=1;
        cin>>k;
        if(k<=9)
        {
            cout<<(k*(k+1))/2<<endl;
            continue;
        }
        for(i=0;i<v1.size();i++)
        {
            if(k<=v1[i])
                break;
        }
        digrem=k-v1[i-1];
        ansmod=digrem%(i+1);
        num=digrem/(i+1);
        string s1(i,'9'),s2,s3,s4;
        num=num+stoll(s1);
        s2=to_string(num);
        s4=to_string(num+1);
        for(i=0;i<ansmod;i++)
            ans+=(s4[i]-'0');
        for(i=0;i<s2.length();i++)
        {
            ll dig=s2[i]-'0';
            if(s2.length()==1)
            {
                ans+=((dig)*(dig+1))/2;
                break;
            }
            p10=1;
            for(j=1;j<s2.length()-1;j++)
                p10*=10;
            s3=s2.substr(1);
            ans+=(dig*(stoll(s3)+1))+(((dig*(dig-1))/2)*(p10*10))+(dig*(45*p10*(s3.length())));
            s2=s3;
            i=-1;
        }
        cout<<ans<<endl;
    }
}