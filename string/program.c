#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    char str[50];
    char sen[50];

    scanf("%c",&ch);
    scanf("%s",str);
    gets(sen);
    
    printf("%c\n",ch);
    printf("%s\n",str);
    printf("%s\n",sen);
    return 0;
}