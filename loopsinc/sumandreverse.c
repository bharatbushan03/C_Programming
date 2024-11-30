#include<stdio.h>
int main()
{
int n;
printf("Enter a number : ");
scanf("%d",&n);
int ld,r=0,c,sum = 0;
c=n;
while(n>0)
{
    r=r*10;
ld=n%10;
r=r+ld;
n=n/10;
sum=sum+ld;
}
printf("The reverse of no %d is %d",c,r);
printf("The sum of no %d is %d",c,sum);
    return 0;
}