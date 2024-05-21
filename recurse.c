#include<stdio.h>
int fact(int);
int main()
{
    int n;
    scanf("%d",&n);
    int p=fact(n);
    printf("%d",p);
}
int fact(int a)
{

    if(a==0)
    {
        return 0;
    }
    else if(a==1)
    {
        return 1;
    }
    else
    {
        return a*fact(a-1);
    }


}
