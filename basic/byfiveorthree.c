#include<stdio.h>
int main()
{
int x;
printf("enter a number\n");
scanf("%d",&x);
if(x%5==0 || x%3==0)
{
    printf("number is divisible by  5 or 3 \n");
}
else
{
    printf("Number is not divisible by 5 or 3\n");
}
    return 0;
}