#include<stdio.h>
int main()
{
    int n;
    printf("Enter a value :");
    scanf("%d",&n);
    int nsp=1,nst=n-1;
      for(int j=1;j<=2*n-1;j++)
        {
            printf("*");
        }
        printf("\n");
    for(int i=1;i<=n;i++)
    {
      
       for(int j=nst;j>=1;j--)
       {  
           printf("*");   
       }
    for (int j=1;j<=nsp;j++)
    {
        printf(" ");
    }
        for(int j=nst;j>=1;j--)
        {
            printf("*");
        }
        
        nsp+=2;
        nst-=1;
        printf("\n");
    }
    
    
    return 0;
}