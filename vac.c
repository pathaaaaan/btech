#include <stdio.h>

int main() {
    int days, dayNumber, vaccinations; 
    int v1=0,v2=0,v3=0,v4=0,v5=0,v6=0,v7=0; //counters for vaccine record on a particular day

    printf("Enter the number of days: ");
    scanf("%d", &days);
    printf("\nAssume 1-Monday 2-Tuesday ... 7-Sunday\n");

    for (int i = 1; i <= days; i++) {
        
        
        printf("Users Choice: ");
        scanf("%d", &dayNumber);
switch(dayNumber){
    case 1:
        printf("Number of Vaccinations: ");
        scanf("%d", &vaccinations);
        v1=v1+vaccinations;


        break;
        case 2:
        printf("Number of Vaccinations: ");
        scanf("%d", &vaccinations);
v2=v2+vaccinations;

        break;
        case 3:
        printf("Number of Vaccinations: ");
        scanf("%d", &vaccinations);
v3=v3+vaccinations;

        break;
        case 4:
        printf("Number of Vaccinations: ");
        scanf("%d", &vaccinations);

v4=v4+vaccinations;
        break;
        case 5:
        printf("Number of Vaccinations: ");
        scanf("%d", &vaccinations);

v5=v5+vaccinations;
        break;
        case 6:
        printf("Number of Vaccinations: ");
        scanf("%d", &vaccinations);
v6=v6+vaccinations;

        break;
        case 7:
        printf("Number of Vaccinations: ");
        scanf("%d", &vaccinations);

v7=v7+vaccinations;
        break;
        default: printf("wrong input");
    }
    }

    printf("Enter the day number for the total number of Vaccinations: ");
    scanf("%d", &dayNumber);

    if(dayNumber==1)
    {
        printf("Total Vaccinations done on Monday: %d\n", v1);
    }
    else if(dayNumber==2)
    {
        printf("Total Vaccinations done on Tuesday: %d\n", v2);
    }
    else if(dayNumber==3)
    {
        printf("Total Vaccinations done on Wednesday: %d\n", v3);
    }
    else if(dayNumber==4)
    {
        printf("Total Vaccinations done on Thursday: %d\n", v4);
    }
    else if(dayNumber==5)
    {
        printf("Total Vaccinations done on Friday: %d\n", v5);
    }
    else if(dayNumber==6)
    {
        printf("Total Vaccinations done on Saturdayy: %d\n", v6);
    }
    else if(dayNumber==7)
    {
        printf("Total Vaccinations done on Monday: %d\n", v7);
    }
    else
    {
        printf("Enter number between 1 and 7\n");
    }

    

    return 0;

}