#include<stdio.h>
int main()
{
int x;
printf("Enter the x co-ordinate :");
scanf("%d",&x);

int y;
printf("Enter the y co-ordinate :");
scanf("%d",&y);
if(x == 0 && y == 0)
{
    printf("It lies on origin");
}
else if (x == 0)
{
    printf("It lies on y axis");
}
else if (y == 0)
{
    printf("It lies on x axis");
}
else
{
    printf("It lies on x-y plane");
}
return 0;
}