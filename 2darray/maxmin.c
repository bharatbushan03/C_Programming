#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
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
    int max=INT_MIN;
    int min= INT_MAX;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter the (%d,%d) element ",i,j);
            scanf("%d",&arr[i][j]);
       if(max<arr[i][j])
       {
        max =arr[i][j];
       }
       if(min>arr[i][j])
       {
        min=arr[i][j];
       }
        }   
    }
     printf("%d\n%d",max,min);
    return 0;
}