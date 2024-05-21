#include<stdio.h>
#include<string.h>

struct Family
{
    char name[50];
    char address[100];
    int age;
    char occupation[50];
    float salary;
};

int main()
{
    int x;
    printf("Enter your total family Member: ");
    scanf("%d",&x);

    struct Family members[x];

    for(int i = 0; i < x; i++)
    {
        printf("Enter name: ");
        scanf(" %[^\n]s", members[i].name);

        printf("Enter address: ");
        scanf(" %[^\n]s", members[i].address);

        printf("Enter age: ");
        scanf("%d", &members[i].age);

        printf("Enter occupation: ");
        scanf("%s", members[i].occupation);

        printf("Enter salary: ");
        scanf("%f", &members[i].salary);
    }

    for(int i = 0; i < x; i++)
    {
        printf("\nMember %d:\n", i + 1);
        printf("Name: %s\n", members[i].name);
        printf("Address: %s\n", members[i].address);
        printf("Age: %d\n", members[i].age);
        printf("Occupation: %s\n", members[i].occupation);
        printf("Salary: %f\n", members[i].salary);
    }

    return 0;
}
