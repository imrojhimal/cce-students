#include<stdio.h>
int sum(int);
int main()
{
    int n;
    scanf("%d",&n);
    int p=sum(n);
    printf("%d",p);
}
sum(a)
{
 if(a==0)
 {
     return 0;
 }
 else if(a==1)
 {
     return 1;
 }
 else{
 return a+sum(a-1);
 }
}
