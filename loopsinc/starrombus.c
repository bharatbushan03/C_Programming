#include<stdio.h>
int main()
{
    int n;
    printf("Enter a value :");
    scanf("%d",&n);
    int nst=1,nsp=n/2,a = n/2 + 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=nst;k++)
        {
            printf("*");
        }
        if(i<a) 
        {
            nst +=2; 
            nsp--;
            
        }
        else
        {
            nst-=2; 
            nsp++;
            
        }
        printf("\n");
    }
                return 0;
}