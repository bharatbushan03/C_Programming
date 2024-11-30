#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    system("cls");
    char str[13] = "Hello  world";
    int n;
    printf("Enter the position :");
    scanf("%d",&n);
    for(int i=10;i>=n;i--)
    {
       str[i+1]=str[i];
    }
    puts(str);
    return 0;
}