#include <stdio.h>
int main() 
{
    int id[5], salary[5], i;
    char name[5][20];
    for(i = 0; i < 5; i++) {
        printf("\nEnter Employee ID: ");
        scanf("%d", &id[i]);
        printf("Enter Employee Name: ");
        scanf("%s", name[i]);
        printf("Enter Salary: ");
        scanf("%d", &salary[i]);
    }
    printf("\nEmployee Records\n");
    printf("ID\tName\tSalary\n");
    for(i = 0; i < 5; i++) {
        printf("%d\t%s\t%d\n", id[i], name[i], salary[i]);
    }
    return 0;
}