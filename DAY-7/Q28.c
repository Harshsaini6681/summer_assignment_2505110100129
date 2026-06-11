#include<stdio.h>
 int rev = 0;
    int reverse(int n)
    {
        if(n==0)
        return rev;
        rev = rev*10 + n%10;
        return reverse(n/10);
    }
int main()
{
    int num;
    printf(" enter the num =");
    scanf("%d",&num);
   
    printf(" reverse =%d\n",reverse(num));
    return 0;
}