// Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num==0)
        printf("You have enterd zero.");
    else if(num>0)
        printf("%d is a positive number.",num);
    else
        printf("%d is a negative number.",num);
    return 0;
}