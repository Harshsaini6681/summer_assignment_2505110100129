#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    for (i=(a>b ? a:b); ;i++)
    {
        if( i%a==0 && i%b==0)
        {
            printf(" lcm = %d",i);
            break;
        }
    }
    return 0;
}