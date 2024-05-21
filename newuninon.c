#include <stdio.h>

union Employee {
    char name[32];
    int empNo;
    float basicSalary;
};

int main() {
    union Employee emp;
    float hra, ma, tds, gross, netSalary;

    // Get employee details
    printf("Enter Employee Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    printf("Enter Employee Number: ");
    scanf("%d", &emp.empNo);
    printf("Enter Basic Salary: ");
    scanf("%f", &emp.basicSalary);

    // Calculate allowances and deductions
    hra = 0.1 * emp.basicSalary;
    ma = 0.35 * emp.basicSalary;
    tds = 0.15 * emp.basicSalary;

    // Calculate gross and net salary
    gross = emp.basicSalary + hra + ma;
    netSalary = gross - tds;

    // Print employee salary details
    printf("\nEmployee Salary Details\n");
    printf("Name: %s", emp.name);
    printf("Employee No: %d\n", emp.empNo);
    printf("Basic Salary: %.2f\n", emp.basicSalary);
    printf("HRA: %.2f\n", hra);
    printf("MA: %.2f\n", ma);
    printf("TDS: %.2f\n", tds);
    printf("Gross Salary: %.2f\n", gross);
    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}
