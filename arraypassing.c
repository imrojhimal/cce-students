#include<stdio.h>
void printarray(int b[],int);

int main()
{
    int a[]={2,5,9};
    int length;
    length= sizeof(a)/sizeof(a[0]);
    printarray(a,length);
}
void printarray(int b[],int len)
{
    for(int i=0;i<len;i++)
    {
        printf("%d\t",b[i]);
    }
}
