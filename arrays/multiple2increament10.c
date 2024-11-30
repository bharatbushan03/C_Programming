#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    system("cls");
    int arr[10]={9,5,11,25,14,55,29,36,42,78};

for(int i=0;i<10;i++)

{
if(i%2 == 0)
    arr[i] += 10;
else 
    arr[i] *= 2;
}

for(int i=0;i<10;i++)
{
    printf("%d\n",arr[i]);
}
    return 0;
}