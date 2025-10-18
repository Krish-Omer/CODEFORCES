#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c100,c10,i;
    cin>>c100>>c10;    
    for(i=0;;i++)
    {
        if((c10>=22)||(c100>=1&&c10>=12)||(c100>=2&&c10>=2))
        {
            if(i%2==0)
            {
                if(c100>=2&&c10>=2)
                {
                    c100=c100-2;
                    c10=c10-2;
                }
                else if(c100>=1&&c10>=12)
                {
                    c100=c100-1;
                    c10=c10-12;
                }
                else 
                    c10=c10-22;
            }
            else 
            {
                if(c10>=22)
                    c10=c10-22;
                else if(c100>=1&&c10>=12)
                {
                    c100=c100-1;
                    c10=c10-12;
                }
                else
                {
                    c100=c100-2;
                    c10=c10-2;
                } 
            }
        }
        else 
            break;
    }
    if(i%2==0)
        cout<<"Hanako";
    else 
        cout<<"Ciel";
}