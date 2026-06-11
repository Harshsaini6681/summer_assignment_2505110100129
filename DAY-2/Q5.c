#include<stdio.h>
int main()
{
    int num,sum =0,n;
    printf("enter the num = ");
    scanf("%d",&num);
    while(num>0)
    {
    n =num %10;
    sum+=n;
    num=num/10;
    }
    printf("the sum of the digit is %d",sum);
    return 0;
}