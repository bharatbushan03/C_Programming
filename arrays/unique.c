#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    system("cls");
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
               flag=true;
            }
        }
        if(flag==false)
        {
            printf("%d ",i);
            break;
        }
    }
    return 0;
}