// Write a program to check whether a given number is divisible by 5 or not


#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%5 == 0)
        printf("You have entered %d which is divisible by 5.",num);
    else
        printf("You have entered %d which is not divisible by 5.",num);
    return 0;
}