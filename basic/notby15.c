#include<stdio.h>
int main()
{
int x;
printf("enter a number\n");
scanf("%d",&x);
if((x%5==0 || x%3==0) && x%15 != 0)
{
    printf("number is divisible by  5 or 3 but not by 15 \n");
}
else
{
    printf("Number is divisible by 15\n");
}
    return 0;
}