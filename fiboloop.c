#include<stdio.h>
int main()
{
    int a,n,t1=0,t2=1;
     printf("enter the term :  ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        printf("%d ,",t1);
        n=t1+t2;
        t1=t2;
        t2=n;
    }
}
