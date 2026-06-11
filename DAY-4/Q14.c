#include<stdio.h>
int main()
{
    int num,a=0,b=1,c,i;
    printf(" enter the num =");
    scanf("%d",&num);
    if(num==1){
        printf(" nth fibonacci =%d\n",a);
    }
    else if(num==2)
    {
    printf("nth fibbonacci =%d\n",b);
    }
    else {
    
    for (i =3;i<=num;i++)
    {
    c=a+b;
    a=b;
    b=c;
}
printf(" nth fibbonacci =%d",c);
}
return 0;

}