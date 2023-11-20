#include<stdio.h>
#include<math.h>
int main()
{
    float sum=0;
    int x;
    printf("Enter value of x: ");
    scanf("%d",&x);
    for(int i = 1; i<= 7; i++)
    {
        sum = sum + (1/i)*(pow((x-1),i));
    }
    printf("ln(%d) = %f \n",x,sum);
}