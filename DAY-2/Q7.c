#include<stdio.h>
int main()
{
    int num,n,product =1;
    printf("enter the num = ");
    scanf("%d",&num);
    while(num>0)
    {
        n =num%10;
        product*=n;
        num=num/10;
    }
    printf("the product of the digit is %d",product);
    return 0;
}