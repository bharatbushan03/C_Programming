#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int r=4;
    int c=2;
    
    int arr[r][c];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter the (%d,%d) element ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
        for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}