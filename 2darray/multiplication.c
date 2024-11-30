#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    //first matrix
    int m;
    printf("Enter the number of rows of 1st matrix");
    scanf("%d",&m);

    int n;
    printf("Enter the number of columns of 1st matrix");
    scanf("%d",&n);
    
    int arr[m][n];
    //input
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the element :");
            scanf("%d",&arr[i][j]);
        }
    }
    //second matrix
    int p;
    printf("Enter the number of rows of 2nd matrix");
    scanf("%d",&p);

    int q;
    printf("Enter the number of columns of 2nd matrix");
    scanf("%d",&q);

    int brr[p][q];
    //input
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("Enter the element :");
            scanf("%d",&brr[i][j]);
        }
    }
     int res[m][q];
    //check
    if(n==p)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                res[i][j]=0;
                for(int k=0;k<n;k++)
                {
                    res[i][j]+=arr[i][k]*brr[k][j];
                }
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}