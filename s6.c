#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter Value of n : ");
    scanf("%d",&n);
    

    float sum = 0;
    
    for(int i=0; i <=n; i++)
    {
        
        if(i%2==0)
        sum = sum - pow(i,i);
        else sum = sum + pow(i,i);

    }
    printf("Sum of series is : %.1f \n",sum);
}  