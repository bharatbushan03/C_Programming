#include<stdio.h>
int main(){
int n;
printf("Enter a number");           
scanf("%d",&n);                         
int nsp=n;                                   
for(int i=1;i<=n;i++){                   
    int a=i-1;
    int b=65;
    for(int q=1;q<=nsp;q++)
    {
    printf(" ");
    }
nsp--;
for(int j=1;j<=i;j++)
{
char ch=(char)b;
    printf("%c",ch);
    b++;
}
for(int k=1;k<=i-1;k++)
{
    char ch=(char)b;
    printf("%c",ch);
    b++;
}
printf("\n");

}
    return 0;
}