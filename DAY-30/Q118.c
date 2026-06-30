#include <stdio.h>
int main()
 {
    char book[5][30];
    int i;
    for(i = 0; i < 5; i++) {
        printf("Enter Book Name %d: ", i + 1);
        scanf("%s", book[i]);
    }
    printf("\nLibrary Books:\n");
    for(i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, book[i]);
    }
    return 0;
}