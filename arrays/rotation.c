#include<stdio.h>
#include<stdlib.h>
void reverse(int arr[],int a,int b)
{
    for(int i=a,j=b;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main()
{
    system("cls");
     int arr[7] ={2,4,6,7,3,9,5};
    reverse(arr,0,6);
    for(int i=0;i<7;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}