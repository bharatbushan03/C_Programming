#include<stdio.h>
int main ()
{
int n;
printf("Enter the number of rows");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        if(i==n/3 +1 || j== n/2 +1)
        printf("*");
    
    }
    printf("\n");
}
    return 0;
}