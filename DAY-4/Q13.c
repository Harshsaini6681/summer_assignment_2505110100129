#include<stdio.h>
int main()
{
    int num,a=0,b=1,c,i;
    printf(" enter the num =");
    scanf("%d",&num);
     
    for(i =2;i<=num -2;i++)
    {
        printf("%d",a);
        c=a+b;
         printf("%d\n",c);
        a=b;
        b=c;
       
    }
    return 0;
}