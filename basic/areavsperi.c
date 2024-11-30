#include<stdio.h>
int main()
{
int l,b;
printf("enter the length of rectangle");
scanf("%d",&l);
printf("enter the breadth of rectangle");
scanf("%d",&b);
int area = l * b;
int peri = 2 * (l + b);
if(area>peri)
{
    printf("area is greatest");
}
else if(area<peri)
{
    printf("perimeter is greatest");
}
else 
{
    printf("both are equal");
    }
    return 0;
}