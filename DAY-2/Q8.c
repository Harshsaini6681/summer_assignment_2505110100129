#include<stdio.h>
int main()
{
    int r,num,sum =0;
    printf(" enter the num =");
    scanf("%d",&num);
   while(num != 0){

    r =num %10;
    sum =(sum*10) + r;
    num =num /10;
}
if(sum==num)
{
    printf("is palidrome %d\n",num);   
}
else {
    printf("is not palidrome %d\n",num);
}
return 0;
}