#include<stdio.h>
int sum(int m,int n)
{
  int c;
  c=m+n;
  return c;
}

int main()
{
    int a,b;
    printf("Enter the values: ");
    scanf("%d%d",&a,&b);
    printf("the total sum is :%d",sum(a,b));

}

