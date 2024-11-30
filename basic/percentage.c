#include<stdio.h>
int main(){
int maths,sci,hin,eng,sst;
printf("enter the marks of all subject");
scanf("%d %d %d %d %d",&maths,&sci,&hin,&eng,&sst);
int percentage = (maths + sci + hin + eng + sst)/5;
printf("the percentage is %d",percentage);

    return 0;
}