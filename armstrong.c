#include<stdio.h>
#include<math.h>
int main()
{
    int n, temp, i;

    printf("Enter a number : ");
    scanf("%d",&n);

    temp = n;
    int c=0;

    while(temp!=0)
    {
        temp = temp/10;
        c++;
    }
    
    temp = n;
    int rem,sum=0;
    while(temp!=0)
    {
        rem = temp%10;
        sum = sum + pow(rem,c);
        temp = temp/10;
    }

    if(sum==n)
    {
        printf("%d is Armstrong!\n",n);
    }
    else printf("%d is not Armstrong!\n",n);
    
    return 0;


}