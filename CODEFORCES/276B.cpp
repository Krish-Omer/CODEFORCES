#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1;
    cin>>s1;
    int low=0,high=s1.length()-1;
    while(low<high)
    {
        if(s1[low]==s1[high])
        {
            low++;
            high--;
        }
    }
    if(low>=high)
        cout<<"First"<<endl;
    else 
    {
        
    }
}