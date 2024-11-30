#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
     system("cls");
     char str[]="Hello Everyone";
     char* ptr=str;
     printf("%p\n",str);
     printf("%s\n",*ptr);
       return 0;
}