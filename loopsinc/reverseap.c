#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the term we need to find out : ");
    scanf("%d",&n);
    int a = 100;
    for(int i=1;a>=0;i++) 
    { 
        printf("%d\n",a);
        a = a - 3; 
    }
    return 0;
}