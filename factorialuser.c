#include<stdio.h>
int factorial(int);
int main()
{
    int num;
    scanf("%d",&num);
    printf("the factorial is %d",factorial(num));
}
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
