#include<stdio.h>
int main()
{
int n;
printf("Enter a number\n");
scanf("%d",&n);
int count = 0;
while(n!=0)
{
n = n/10;
count = count + 1;
}
printf("The no of digits in n are %d", count);
    return 0;
}