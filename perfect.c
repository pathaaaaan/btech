#include<stdio.h>
int main()
{
    int R1,R2,num;
    printf("Enter the rangle R1 and R2 : ");
    scanf("%d%d",&R1,&R2);
    printf("Perfect numbers between %d and %d are : \n",R1,R2);
    for(num=R1;num<=R2;num++)
    {
        int sum = 0;
        for(int i = 1; i<num;i++)
        {
        if(num%i==0)
        sum +=i;
        }
        if(sum==num) printf("%d, ",num);

    }
    printf("\n");

}