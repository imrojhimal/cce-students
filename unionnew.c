#include <stdio.h>
#include <string.h>
union Employee {
  struct EmployeeDetails {
    char name[32];
    int empNo;
    float basic;
  } details;
}emp;
int main() {
  float hra, ma, tds, gross, net;
  printf("Enter Employee Name: ");
  scanf(" %[^\n]", emp.details.name);
  printf("Enter Employee Number: ");
  scanf("%d", &emp.details.empNo);
  printf("Enter Basic Salary: ");
  scanf("%f", &emp.details.basic);
  hra = 0.1 * emp.details.basic;
  ma = 0.35 * emp.details.basic;
  tds = 0.15 * emp.details.basic;
  gross = emp.details.basic + hra + ma;
  net = gross - tds;
  printf("\nEmployee Salary Details\n");
  printf("Name: %s\n", emp.details.name);
  printf("Employee No: %d\n", emp.details.empNo);
  printf("Basic Salary: %f\n", emp.details.basic);
  printf("HRA: %f\n", hra);
  printf("MA: %f\n", ma);
  printf("TDS: %f\n", tds);
  printf("Gross Salary: %f\n", gross);
  printf("Net Salary: %f\n", net);
  return 0;
}

