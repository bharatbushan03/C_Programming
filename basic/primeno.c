#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the term we need to find out : ");
    scanf("%d",&n);
    int a = 0;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            a=1;
    }
    }
    if (n==1) printf("1 is neither prime nor composite");
    if (a==0) printf("%d is a PRIME NUMBER",n);
    if (a==1) printf("%d is a COMPOSITE NUMBER",n);
    return 0;
}