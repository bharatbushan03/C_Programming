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
        int x=1;
    for(int i=0;i<n;i++)
        {
            printf("Enter the %d element of an array :",i);
            scanf("%d",&arr[i]);
        }
    for(int i=0;i<n/2;i++)
    {
        if(arr[i] !=arr[n-1-i])
        {
            x=0;
            break;
        }
    }
    printf("Array is palindrome : %s\n", x ?"True":"False");    
    return 0;
}