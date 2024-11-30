#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int arr[10]={1,2,3,4,5,6,7,8,9,5};
    
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d",arr[i]);
                break;
            }
        }
    }
    return 0;
}