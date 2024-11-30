#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int r;
    printf("Enter the number of rows :");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns :");
    scanf("%d",&c);
    int l1,l2,r1,r2;
    printf("Enter the values of l1 and l2");
    scanf("%d%d",&l1,&l2);
    printf("Enter the values of r1 and r2");
    scanf("%d%d",&r1,&r2);
    int arr[r][c];
    int sum = 0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter the (%d,%d) element ",i,j);
            scanf("%d",&arr[i][j]);
    }
    }
    for(int i=l1;i<l2;i++)
    {
        for(int j=r1;j<r2;j++)
        {
            sum +=arr[i][j];
    }
    }
     printf("%d",sum);
    return 0;
}