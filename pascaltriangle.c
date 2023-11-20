#include<stdio.h>
int main()
{
    int i,j,k,c=1;

    for(i=1;i<=6;i++)
    {
        for(k=i;k<=5;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            if(i==1 || j==1)
            c=1;
            else
            c= c*(i-j+1)/(j-1);
            printf("%d ",c);
        }
        printf("\n");
    }
}