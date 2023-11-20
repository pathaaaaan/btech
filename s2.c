#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter Value of n : ");
    scanf("%d",&n);
    float sum = 0.0;
    for(int i=1; i <= n; i++)
    {
        if(i%2==0) sum = sum - (1/(pow(i,i)));
        else sum = sum + (1/(pow(i,i)));
    }
    printf("Sum of eries is : %f \n",sum);
}