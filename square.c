#include<stdio.h>
int main()
{
    int N,n;
    printf("Enter value of N: ");
    scanf("%d",&N);
    
    while(N!=0)
    {
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n>0)
    {
        printf("Square of %d is %d \n",n,n*n);
    }
    else 
    break;
    N--;
    }

}