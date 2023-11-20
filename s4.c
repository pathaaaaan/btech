#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter Value of n : ");
    scanf("%d",&n);
    int sum = 0;
    int fact = 1;

    for(int i=1; i <=n; i++)
    {
        fact = fact * i;
        sum = sum + fact;

    }
    printf("Sum of series is : %d \n",sum);
}    