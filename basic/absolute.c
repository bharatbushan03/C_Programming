#include<stdio.h>
int main()
{
int x;
printf("enter the value of x");
scanf("%d",&x);
if(x<0)
{
    x = x * (-1);
}
printf("%d",x);

    return 0;
}