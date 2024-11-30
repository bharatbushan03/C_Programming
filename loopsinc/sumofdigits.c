#include<stdio.h>
int main()
{
int n;
printf("Enter a number\n");
scanf("%d",&n);
int ld,sum=0;
while(n!=0)
{
    ld = n % 10;
    sum = sum + ld;
    n = n / 10;

}
printf("The sum of all digits are : %d",sum);
    return 0;
}