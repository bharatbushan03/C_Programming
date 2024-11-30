#include<stdio.h>
int main()
{
int a;
printf("Enter the 1st number : ");
scanf("%d",&a);
int b;
printf("Enter the 2nd number : ");
scanf("%d",&b);

int c;
printf("Enter the 3rd number : ");
scanf("%d",&c);
if(a>b && a>c)
{
    printf("a is the greatest of all i.e; %d",a);
}
else if(b>c){
    printf("b is greatest of all i.e; %d",b);
}
else {
    printf("c is the greatest of all i.e; %d",c);
}
    return 0;
}