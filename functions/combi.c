#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact *=i;
    }
    return fact;
}
int combination(int a,int b)
{
    int ncr= factorial(a)/(factorial(b)*factorial(a-b));
      return ncr;
}
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    int r;
    printf("Enter the value of r");
    scanf("%d",&r);
    int ncr=combination(n,r);
    printf("%d",ncr);
    return 0;
}