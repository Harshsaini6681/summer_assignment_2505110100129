#include <stdio.h>
int main() 
{
    int arr[100], n, i;
    int sum = 0, Sum, missing ;
    printf("Enter value of n= ");
    scanf("%d", &n);
    printf("Enter %d elements=\n", n - 1);
    for(i = 0; i < n - 1; i++)
     {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    Sum = n * (n + 1) / 2;
    missing  =Sum - sum;
    printf("Missing number = %d\n", missing );
    return 0;
}