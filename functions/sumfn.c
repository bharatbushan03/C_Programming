#include<stdio.h>
int sum(int a,int b)
{
  int  sum= a+b;
    return sum;
}
int main()
{
    int a,b;
    printf("Enter the values of a and b");
    scanf("%d %d",&a,&b);
  
    printf("%d",sum(a,b));
    
    return 0;
}