// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int i,n,k,s,e;
//         cin>>n>>k;
//         string s1;
//         cin>>s1;
//         if(s1.length()==1)
//             cout<<"NO"<<endl;
//         else 
//         {
//             s=0;
//             e=s1.length()-1;
//             if(s1[s]<s1[e])
//             {
//                 cout<<"YES"<<endl;
//                 continue;
//             }
//             if(s1[s]>s1[e])
//             {
//                 if(k>=1)
//                     cout<<"YES"<<endl;
//                 else 
//                     cout<<"NO"<<endl;
//             }
//             else
//             {
//                 int p=0;
//                 while(s<e)
//                 {
//                     if(s1[s]<s1[e])
//                     {
//                         p=1;
//                         break;
//                     }
//                     if(s1[s]>s1[e])
//                     {
//                         if(k>=1)
//                             p=1;
//                         else 
//                             p=0;
//                         break;
//                     }        
//                     for(i=s+1;i<e;i++)
//                     {
//                         if(s1[i]<s1[s])
//                         {
//                             p=1;
//                             break;
//                         }
//                     }
//                     s++;
//                 }
//                 if(p==1 && k>=1)
//                     cout<<"YES"<<endl;
//                 else 
//                     cout<<"NO"<<endl;
//             }
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,p=0;
        cin>>n>>k;
        string s,rev;
        cin>>s;
        rev=s;
        reverse(rev.begin(),rev.end());
        for(i=1;i<s.length();i++)
        {
            if(s[i]!=s[0])
            {
                p=1;
                break;
            }
        }
        if(s<rev)
            cout<<"YES"<<endl;
        else if(s==rev && p==0)
            cout<<"NO"<<endl;
        else if(k>=1)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
}