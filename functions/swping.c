#include<stdio.h>
void swap(int* x,int* y)
{
    int c=*x;
    *x=*y;
    *y=c;
    return;
}
int main()
{
    int a;
    printf("Enter the value of a");
    scanf("%d",&a);
    
    int b;
    printf("Enter the value of b");
    scanf("%d",&b);
    
    swap(&a,&b);
    
    printf("The value of a is %d",a);
    printf("\nThe value of a is %d",b);
    return 0;
}
