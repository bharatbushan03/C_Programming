#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
        int n;
        printf("Enter the size of an array :");
        scanf("%d",&n);
        int arr[n];
        int x;
        printf("Enter the value of x :");
        scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element of an array ",i);
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<=n;i++)
     {
        for(int j=0;j<i;j++)
        {
            if(arr[i] + arr[j]==x)
            printf("(%d,%d)",arr[i],arr[j]);
        }
     }
    return 0;
}