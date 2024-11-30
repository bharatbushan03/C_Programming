#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   system("cls");
   char str[]="Hello Everyone";
   puts(str);
   char ch[40];
//    scanf("%[^\n]s",ch);
//    printf("%s",ch);
    gets(ch);
    puts(ch);
    return 0;
}