#include<stdio.h>
int main()
{
    int i,j,k,l=1;
    for(i=5;i>=1;i--)
    {
        for(k=1;k<=l;k++)
        {
            printf(" ");
        }
        l++;
        for(j=1;j<=i;j++)
        {
            printf("* ");

        }
        printf("\n");
    }
}