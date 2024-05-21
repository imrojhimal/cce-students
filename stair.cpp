#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    int t;
    cin>>t;
    while(t!=0)
    {
        cin>>a>>b>>c;
        if(a<b&&b<c)
        {
            cout<<"STAIR\n";
        }
        else if(a<b&&b>c)
        {
            cout<<"PEAK\n";
        }
        else
        {
            cout<<"NONE\n";
        }
        t--;
    }

    }
