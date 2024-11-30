#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int size = 2*n-1;
    int pattern[size][size];
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size-i;j++)
        {
            pattern[i][j] = n-i;
            pattern[size-i-1][j] = n-i;
            
            pattern[j][i] = n-i;
            pattern[j][size-i-1] = n-i;
        }
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("%d ",pattern[i][j]);
        }
        printf("\n");
    }
    return 0;
}