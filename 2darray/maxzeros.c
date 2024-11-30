#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("cls");
    int a[3][4] = {{1,0,0,1},{1,2,0,7,},{1,1,1,1,},{1,1,0,0}};
    int maxCount=0,idx=-1;
    for(int i=0;i<3;i++)
    {
        int count = 0;
        for(int j=0;j<4;j++)
        {
            if(a[i][j] ==1) count++;
        }
        if(maxCount<count)
        {
            maxCount =count;
            idx=i;
        }
    }

printf("%d\n%d",maxCount,idx);
    return 0;
}