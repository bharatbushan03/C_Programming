#include<stdio.h>
int main()
{
int x;
printf("Enter the marks of student");
scanf("%d",&x);
if(x>75 && x<=100)
{
printf("DISTINCTION");
}
else if(x>60 && x<=75)
{
    printf("FIRST CLASS");
}
else if(x>45 && x<=60)
{
printf("SECOND CLASS");
}
else if(x>33 && x<=45)
{
printf("THIRD CLASS");
}
else
{
printf("FAIL");
}
    return 0;
}