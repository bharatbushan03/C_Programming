#include<stdio.h>
int factorial(int u)
{
    int fact=1;
    for(int i=1;i<=u;i++)
    {
        fact *= i;
    }
    return fact;
}
int permutation(int x, int y)
{
    return factorial(x)/factorial(y);
}
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    int r;
    printf("Enter the value of r");
    scanf("%d",&r);
    printf("The permutation of %d and %d is %d",n,r,permutation(n,r));
    return 0;
}