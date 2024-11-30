#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    system("cls");
    char ch[] = "Hello world ";
    int x=strlen(ch);
    printf("%d\n",x);

    char str[40]; 
    strcpy(str,ch);
    puts(ch);

    strcat(ch,str);
    puts(ch);

    strcmp(ch,str);
    return 0;
}