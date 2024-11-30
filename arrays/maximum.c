#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    system("cls");
    int arr[10]={9,5,11,25,14,55,29,36,42};
    int max = INT_MIN;
    for(int i=0;i<10;i++)
{
    if(max<arr[i])
    max = arr[i];
}
printf("%d",max);


    return 0;
}