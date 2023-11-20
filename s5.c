#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter Value of n : ");
    scanf("%d",&n);
    int x;
    printf("Enter Value of x : ");
    scanf("%d",&x);

    float sum = 0;
    
    for(int i=0; i <=n; i++)
    {
        
        if(i%2==0)
        sum = sum + pow(x,i);
        else sum = sum - pow(x,i);

    }
    printf("Sum of series is : %.1f \n",sum);
}  