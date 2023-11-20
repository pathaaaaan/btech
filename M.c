#include<stdio.h>
int main()
{
    int i,j,k,l=1,s=8;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=l;k++)
        {
            printf("%d ",k);
        }
        l++;
        for(j=1;j<=s;j++)
        {
            printf("  ");

        }
        s = s-2;
        for(k=i;k>=1;k--)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}