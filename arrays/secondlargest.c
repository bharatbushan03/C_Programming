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
        int max = INT_MIN,smax =INT_MIN;
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element of an array ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
   {
    if(max<arr[i])
    max =arr[i];
   }
   for(int i=0;i<n;i++)
   {
    if(smax<arr[i] && arr[i] != max)
    smax = arr[i];
   }
   printf("%d",smax);
    return 0;
}