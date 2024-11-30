#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
        int n;
        printf("Enter the size of an array :");
        scanf("%d",&n);
        int arr[n];
        int OddSum =0,EvenSum =0;
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element of an array ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2 ==0)
        EvenSum += arr[i];
    else
        OddSum +=arr[i];
    } 
    printf("%d",EvenSum-OddSum);
    return 0;
}