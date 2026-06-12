#include<stdio.h>
int palidrome(int n)
{
    int rev=0,rem,temp;
    temp =n;
    while(n>0)
    {
        rem =n%10;
        rev =rev*10+rem;
        n=n/10;
    }
    if ( temp==rev)
    return 1;
    else
    return 0;
}
int main()
{
    int num;
    printf("enter the num =");
    scanf("%d",&num);
    if(palidrome(num))
    printf("palidrome no");
    else 
    printf("not a palidrome no");
    return 0;
}