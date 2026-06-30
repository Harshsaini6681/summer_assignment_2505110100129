#include <stdio.h>
int main()
 {
    int roll[5], i;
    char name[5][20];
    int marks[5];
    for(i = 0; i < 5; i++) {
        printf("\nEnter Roll No: ");
        scanf("%d", &roll[i]);
        printf("Enter Name: ");
        scanf("%s", name[i]);
        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }
    printf("\nStudent Records\n");
    printf("Roll\tName\tMarks\n");
    for(i = 0; i < 5; i++) {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }
    return 0;
}