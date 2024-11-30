#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int arr[10]={1,2,3,4,5,6,7,8,9};
    int sum =0;
    for(int i=0;i<10;i++)
    {
        sum +=arr[i];
    }
    int sum2 = 10*(10+1)/2;

    printf("%d",sum2-sum);

    return 0;
}