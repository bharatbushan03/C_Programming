#include<stdio.h>
int main ()
{
    int n;
    printf("Enter a number whose table we need to find : ");
    scanf("%d",&n);
    int a;
    for(int i = 1;i<=10;i++)
{
    a = n*i;
    printf("%d * %d = %d \n",n,i,a);
}

    return 0;
}