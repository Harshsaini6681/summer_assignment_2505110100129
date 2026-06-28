#include <stdio.h>
struct Salary 
{
    int empId;
    char name[20];
    float basic, hra, da, total;
};
int main()
 {
    struct Salary s;
    printf("Enter Employee ID: ");
    scanf("%d", &s.empId);
    printf("Enter Employee Name: ");
    scanf("%s", s.name);
    printf("Enter Basic Salary: ");
    scanf("%f", &s.basic);
    printf("Enter HRA: ");
    scanf("%f", &s.hra);
    printf("Enter DA: ");
    scanf("%f", &s.da);
    s.total = s.basic + s.hra + s.da;
    printf("\n--- Salary Details ---\n");
    printf("Employee ID: %d\n", s.empId);
    printf("Name: %s\n", s.name);
    printf("Basic Salary: %.2f\n", s.basic);
    printf("HRA: %.2f\n", s.hra);
    printf("DA: %.2f\n", s.da);
    printf("Total Salary: %.2f\n", s.total);
    return 0;
}