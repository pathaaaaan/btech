#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter Value of n : ");
    scanf("%d",&n);
    int sum = 1;
    for(int i=1;i <= n;i++)
    {
        sum = sum + ((i+1)*i);

    }
    printf("Sum of eries is : %d \n",sum);
}    