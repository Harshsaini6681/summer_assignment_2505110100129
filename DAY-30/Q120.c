#include <stdio.h>
void input(int roll[], char name[][20], int marks[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("\nEnter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }
}
void display(int roll[], char name[][20], int marks[], int n) {
    int i;
    printf("\nStudent Records\n");
    printf("Roll\tName\tMarks\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }
}
int main() {
    int n;
    int roll[10], marks[10];
    char name[10][20];
    printf("Enter number of students: ");
    scanf("%d", &n);
    input(roll, name, marks, n);
    display(roll, name, marks, n);
    return 0;
}