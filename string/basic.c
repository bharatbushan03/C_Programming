#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    system("cls");
   char ch[12] ={'h','e','l','l','o',' ','w','o','r','l','d'};
   int i=0;
   while(ch[i]!='\0')
   {
      printf("%c",ch[i]);
      i++;
   }
   return 0;
}