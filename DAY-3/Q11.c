#include<stdio.h>
int main()
{
    int a,b,i,gcd;
    printf("enter the value of a =");
    scanf("%d",&a);
    printf("enter the value of b =");
    scanf("%d",&b);
    for (i = 1;i<=a && i<=b;i++)
    {
    if (a %i==0 && b %i ==0)
    gcd = i;
}
printf(" the value of gcd =%d\n",gcd);
return 0;
}