// Write a program which takes the month number as an input and display number of days in that month.

#include<stdio.h>

int main()
{
    int month_number;
    printf("Enter month number: ");
    scanf("%d",&month_number);
    if(month_number==1 || month_number==3 || month_number==5 || month_number==7 || month_number==8 || month_number==10 || month_number==12)
        printf("Number of days in this month is 31.");
    else if(month_number==2)
        printf("Number of days in this month is 28 or 29.");
    else
        printf("Number of days in this month is 30.");
    return 0;
}