#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    int c = a % b;
    printf("the remainder is %d",c);
    return 0;
}