#include<stdio.h>
int main()
{
    int N;
    float sum = 0.0;
    int F = 1;
    printf("Enter N : ");
    scanf("%d",&N);
     for(int i = 1; i <= N; i++){
        F = F*i;
        if(i % 2 == 0)
        {
            sum = sum - ((float)i/(float)F);
        }
        else {
        sum = sum + ((float)i/(float)F);
        }
     }
     printf("\nSum = %f\n",sum);

}