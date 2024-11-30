#include<stdio.h>
int main()
{
int x;
printf("enter the percentage of student");
scanf("%d",&x);
if(x>=90)
printf("A grade");
else if(x>=80)
printf("B grade");
else if(x>=40)
printf("C grade");
else
printf("FAIL");
    return 0;
}