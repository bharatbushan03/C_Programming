#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
       int n;
       printf("Enter the size of an array :");
       scanf("%d",&n);
       int arr[n];
       for (int i=0;i<n;i++)
       {
        printf("Enter the %d element of an array :",i);
        scanf("%d",&arr[i]);
       }
       for(int i=0;i<n;i++)
       {
        printf("%d ",arr[i]);
       }
    return 0;
}
