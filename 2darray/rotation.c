#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    //input the array
    int n;
    printf("Enter the number of rows and columns :");
    scanf("%d",&n);
  
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the (%d,%d) element ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //transpose the matrix
    for(int i=0;i<n;i++)
   {
    for(int j=0;j<=i;j++)
    {
        int temp =arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
    }
   }
   //rotate
   for(int i=0;i<n;i++)
   {
    int j=0,k=n-1;
    while(j<k)
    {
        int temp=arr[i][j];
        arr[i][j]=arr[i][k];        
        arr[i][k]=temp;   
        j++;
        k--;     
   }
   }
   //output
       for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}