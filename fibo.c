#include<stdio.h>

int main()
{
int s=10;
int *cr;
cr=&s;
printf("%p \n",cr);
printf("%d",*cr);


}
