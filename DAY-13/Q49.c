#include<stdio.h>
int main()
{
    int a[5],i;
    printf("enter the five element");
    for(i =0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array element are \n");
    for(i=0;i<=5;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}