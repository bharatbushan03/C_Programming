#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the term we need to find out : ");
    scanf("%d",&n);
    int a = 4;
    for(int i=1;i<=n;i++) 
    { 
        printf("%d\n",a);
        a=a+3; 
    }
    return 0;
}