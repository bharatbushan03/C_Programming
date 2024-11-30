#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    system("cls");
   char str[40];
   scanf("%[^\n]s",str);
   int size = 0;
    int k=0;
    while(str[k]!='\0')
   {
    size++;
    k++;
   }
  printf("%d",size);
   int i=0,j=size-1;
   while(i<=j)
   {
    int temp = str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
   }
   printf("\n%s",str);
    return 0;
}