#include<stdio.h>
#include<stdlib.h>
int main ()
{
    system("cls");
int n;
printf("Enter the number of rows");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
if(i%2==0){
    int a = 65;
    for(int j = 1;j<=i;j++){
        char ch = (char)a;
        printf("%c",ch);
        a++;
    }
    }
    else
    {
        for(int j=1;j<=n;j++)
        {
            printf("%d",j);

        }
    }
    printf("\n");
}
    return 0;
}