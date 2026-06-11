#include<stdio.h>
int main()
{
    int num,i;
    printf(" enter the num =");
    scanf("%d",&num);
    if (num<=1)
    {
        printf("the num is not prime number");
        return 0;
    }
    for (i = 2;i<=num / 2;i++)
    {
    if (num%i==0)
    {
        printf("the number is not prime number");
    return 0;
}
}
    printf("the num is prime number");
return 0;
}