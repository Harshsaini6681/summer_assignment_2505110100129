#include<stdio.h>
int main()
{
    int num,reverse,n;
    printf(" enter a number");
    scanf("%d",&num);
    reverse=0;
    while(num>0)
    {
        n=num%10;
        reverse=reverse*10+n;
        num=num/10;
    }
    printf(" the reversed number is %d",reverse);
        return 0;
}