#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int r,c;
    printf("Enter the number of rows and columns :");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter the elements of an array :");
            scanf("%d",&arr[i][j]);
        }
    }
    int max_sum=-1,row_index=-1,Idx=-1;
    for(int i=0;i<r;i++)
    {
        int row_sum=0;
        for(int j=0;j<c;j++)
        {
            row_sum +=arr[i][j];
        }
        if(row_sum>max_sum)
        {
            max_sum=row_sum;
            Idx=i;
        }
    }
    printf("%d\n%d",max_sum,Idx);
    return 0;
}