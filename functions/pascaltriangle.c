#include<stdio.h>
int factorial(int z)
{
    int fact =1;
    for(int i=1;i<=z;i++)
    {
    fact *=i;
        
    }
    return fact;
}
int combination(int x,int y)
{
    return factorial(x)/(factorial(y)*factorial(x-y));
}
int main()
{
    int n;
printf("Enter the number of rows of pascals triangle ");
scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
    for(int j=0;j<=i;j++)
        {
            printf("%d ",combination(i,j));
        }
        printf("\n");
    }
    return 0;
}