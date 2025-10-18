#include<bits/stdc++.h>
using namespace std;
int main()
{
    string cok,cot,ki,ti;
    int k,t,dif1,dif2,i;
    char dif;
    cin>>cok>>cot;
    ki=cok[1];
    ti=cot[1];
    k=stoi(ki);
    t=stoi(ti);
    dif1=abs(k-t);
    if(cok[0]>cot[0])
        dif=cok[0]-cot[0];
    else 
        dif=cot[0]-cok[0];
    dif2=dif;
    cout<<max(dif1,dif2)<<endl;
    if(max(dif1,dif2)==0)
        exit(0);
    if(cok[0]==cot[0] && ki>ti)
    {
        for(i=0;i<max(dif1,dif2);i++)
            cout<<"D"<<endl;
        exit(0);
    }
    if(cok[0]==cot[0] && ki<ti)
    {
        for(i=0;i<max(dif1,dif2);i++)
            cout<<"U"<<endl;
        exit(0);
    }
    if(ki==ti && cok[0]>cot[0])
    {
        for(i=0;i<max(dif1,dif2);i++)
            cout<<"L"<<endl;
        exit(0);
    }
    if(ki==ti && cok[0]<cot[0])
    {
        for(i=0;i<max(dif1,dif2);i++)
            cout<<"R"<<endl;
        exit(0);
    }
    if(cok[0]>cot[0] && ki<ti)
    {
        for(i=0;i<min(dif1,dif2);i++)
            cout<<"LU"<<endl;
        if(dif2==min(dif1,dif2))
        {
            for(i=0;i<(max(dif1,dif2)-min(dif1,dif2));i++)
                cout<<"U"<<endl;
        }
        else 
        {
            for(i=0;i<(max(dif1,dif2)-min(dif1,dif2));i++)
                cout<<"L"<<endl;
        }
        exit(0);
    }
    if(cok[0]>cot[0] && ki>ti)
    {
        for(i=0;i<min(dif1,dif2);i++)
            cout<<"LD"<<endl;
        if(dif2==min(dif1,dif2))
        {
            for(i=0;i<(max(dif1,dif2)-min(dif1,dif2));i++)
                cout<<"D"<<endl;
        }
        else 
        {
            for(i=0;i<(max(dif1,dif2)-min(dif1,dif2));i++)
                cout<<"L"<<endl;
        }
    }
    if(cok[0]<cot[0] && ki<ti)
    {
        for(i=0;i<min(dif1,dif2);i++)
            cout<<"RU"<<endl;
        if(dif2==min(dif1,dif2))
        {
            for(i=0;i<(max(dif1,dif2)-min(dif1,dif2));i++)
                cout<<"U"<<endl;
        }
        else 
        {
            for(i=0;i<(max(dif1,dif2)-min(dif1,dif2));i++)
                cout<<"R"<<endl;
        }
    }
    if(cok[0]<cot[0] && ki>ti)
    {
        for(i=0;i<min(dif1,dif2);i++)
            cout<<"RD"<<endl;
        if(dif2==min(dif1,dif2))
        {
            for(i=0;i<(max(dif1,dif2)-min(dif1,dif2));i++)
                cout<<"D"<<endl;
        }
        else 
        {
            for(i=0;i<(max(dif1,dif2)-min(dif1,dif2));i++)
                cout<<"R"<<endl;
        }
    }
}