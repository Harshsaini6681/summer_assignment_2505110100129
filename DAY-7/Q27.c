#include<stdio.h>
 int sumDigits(int n)
    {
        if(n==0)
        return 0;
        return (n%10)+ sumDigits(n/10);
    }
int main()
{
    int num,sum;
    printf(" enter the num =");
    scanf("%d",&num);
   
    printf(" sum of digits =%d",sumDigits(num));
    return 0;
}