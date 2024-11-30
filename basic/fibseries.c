#include<stdio.h>
int main ()
{
    int a=1,b=1,sum=0;
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
for(int i=1;i<=n-2;i++)
{
sum=a + b;
a=b;
b = sum;
}
printf("The %d of a fib series is %d \n",n,b);
    return 0;
}