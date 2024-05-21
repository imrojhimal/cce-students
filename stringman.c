#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,c=0;
    char ch[100];
    gets(ch);
    while(ch[i]!='\0')
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i')
        {
            c++;
        }
        i++;
    }


    printf("%s",ch);
}
