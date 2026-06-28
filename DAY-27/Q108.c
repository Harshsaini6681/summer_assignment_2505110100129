#include <stdio.h>
int main() 
{
    char name[20];
    int roll;
    float m1, m2, m3, total, percentage;
    printf("Enter Roll Number: ");
    scanf("%d", &roll);
    printf("Enter Student Name: ");
    scanf("%s", name);
    printf("Enter Marks of 3 Subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);
    total = m1 + m2 + m3;
    percentage = total / 3;
    printf("\n--- Marksheet ---\n");
    printf("Roll Number : %d\n", roll);
    printf("Name        : %s\n", name);
    printf("Total Marks : %.2f\n", total);
    printf("Percentage  : %.2f%%\n", percentage);
    return 0;
}