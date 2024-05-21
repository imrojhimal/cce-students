#include <stdio.h>
union personalincome {
    int basic;
};

int main() {
    union personalincome p;
    printf("Enter your employment details:\n");
    printf("Enter your name: \n");
    char name[30];
    scanf("%[^\n]", name);
    getchar();
    printf("Enter your employee id: \n");
    char id[10];
    scanf("%[^\n]", id);
    printf("Enter your basic salary: \n");
    scanf("%d", &p.basic);
    float hra = 0.1 * p.basic;
    float ma = 0.35 * p.basic;
    float tds = 0.15 * p.basic;
    float gross = p.basic + hra + ma;
    float net = gross - tds;
    printf("Name: %s\n", name);
    printf("Employee ID: %s\n", id);
    printf("Basic Salary: %d\n", p.basic);
    printf("Gross Salary: %.2f\n", gross);
    printf("Net Salary: %.2f\n", net);
    return 0;
}

