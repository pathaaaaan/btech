#include<stdio.h>
int main()
{
    int n;
    printf("Enter Value of n : ");
    scanf("%d",&n);

    float sum = 0.0;

    float F=1.0;
    for(int i=1;i<=n;i++)

{
    F = F * i;
    sum = sum + (i/F);
}
printf("sum of series is : %f\n",sum);
}