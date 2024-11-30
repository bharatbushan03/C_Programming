#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main()
{
    system("cls");
        int n;
        printf("Enter the size of an array :");
        scanf("%d",&n);
        int arr[n];
        int brr[n];
    for(int i=0;i<n;i++)
        {
            printf("Enter the %d element of an array :");
            scanf("%d",&arr[i]);
        }
    for(int i=0;i<n;i++)
    {

        brr[i] = arr[n-1-i];
        printf("%d ",brr[i]);
    }

    return 0;
}