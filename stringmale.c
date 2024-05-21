#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char c[100],ch[100];
    printf("Enter your name and student Id \n");
     gets(ch);
    gets(c);
    printf("%s\n",strupr(ch));
    printf("%s",strlwr(c));


}
