<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 57477e240887b4b0d403e54b7a74046b3d48bd3d
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int temp,store,counter=0;
    bool check;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        temp=i;
        while(temp!=0)
        {
            store=temp%10;
            if(store==4||store==7)
            {
                check=true;
            }
            else
            {
              check=false;
              break;
            }
           temp=temp/10;
        }
        if(check==true)
        {
            counter++;
            cout<<i<<" ";
        }
    }
    if(counter==0)
    {
        cout<<"-1";
    }
}
<<<<<<< HEAD
=======
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int temp,store,counter=0;
    bool check;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        temp=i;
        while(temp!=0)
        {
            store=temp%10;
            if(store==4||store==7)
            {
                check=true;
            }
            else
            {
              check=false;
              break;
            }
           temp=temp/10;
        }
        if(check==true)
        {
            counter++;
            cout<<i<<" ";
        }
    }
    if(counter==0)
    {
        cout<<"-1";
    }
}
>>>>>>> 95b4bac31c74982ba41e6c86620a99637f80d45e
=======
>>>>>>> 57477e240887b4b0d403e54b7a74046b3d48bd3d
