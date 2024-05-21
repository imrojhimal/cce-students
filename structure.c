#include<stdio.h>

struct family {
    char name[30];
    char address[50];
    char occupation[30];
    int age;
    float salary;
};

int main() {
    int n, i;

    printf("Enter the number of family members: ");
    scanf("%d", &n);

    struct family member[n];

    for(i = 0; i < n; i++) {
        printf("Enter the member name: ");
        scanf(" %[^\n]", member[i].name);
        printf("Enter the member address: ");
        scanf(" %[^\n]", member[i].address);
        printf("Enter the member occupation: ");
        scanf(" %[^\n]", member[i].occupation);
        printf("Enter the member age: ");
        scanf("%d", &member[i].age);
        printf("Enter the member salary: ");
        scanf("%f", &member[i].salary);
    }

    printf("\nFamily Members:\n");
    for(i = 0; i < n; i++) {
        printf("\nName: %s\n", member[i].name);
        printf("Address: %s\n", member[i].address);
        printf("Occupation: %s\n", member[i].occupation);
        printf("Age: %d\n", member[i].age);
        printf("Salary: %.2f\n", member[i].salary);
        printf("\n");
    }

    return 0;
}
