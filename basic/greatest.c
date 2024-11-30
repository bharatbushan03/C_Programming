#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter the values of x , y and z");
scanf("%d %d %d",&x,&y,&z);
if(x>y)
{
    if(x>z)
    {
        printf("x is greatest");
    }
    else
    {
printf("z is greatest");
    }
}
else
{
if(y>z)
{
    printf("y is greatest");
}
else
{
    printf("z is greatest");
}
}
    return 0;
}