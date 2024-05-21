#include<stdio.h>
int fibo(int);
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ,",fibo(i));
    }
}
fibo(a)
{
    if(a==0)
        return 0;
    else if(a==1)
        return 1;
    else
        return fibo(a-1)+fibo(a-2);

}
