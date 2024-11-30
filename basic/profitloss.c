#include<stdio.h>
int main()
{
int sp,cp;
printf("enter the selling price");
scanf("%d",&sp);
printf("enter the cost price");
scanf("%d",&cp);
if(sp>cp)
{
printf("PROFIT");
printf("%d \n",(sp-cp));
}
else if (cp>sp)
{
printf("LOSS");
printf("%d \n",(cp-sp));
}
else{
    printf("NO PROFIT NOI LOSS");
}
    return 0;
}