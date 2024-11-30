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
    int arr[r][c];
    int sum = 0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter the (%d,%d) element ",i,j);
            scanf("%d",&arr[i][j]);
            sum +=arr[i][j]; 
        }   
    }
     printf("%d",sum);
    return 0;
}