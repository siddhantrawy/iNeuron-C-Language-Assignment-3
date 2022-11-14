// Write a program to check whether a given number is positive or non positive.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num > 0)
        printf("You entered %d which is a positive number.",num);
    else if(num < 0)
        printf("You entered %d which is a negative number.",num);
    else
        printf("You have entered zero.");
    return 0;
}