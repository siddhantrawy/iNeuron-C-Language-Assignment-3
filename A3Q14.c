// Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%3==0)
        printf("%d is divisible by 3.",num);
    else if(num%7==0)
        printf("%d is divisible by 7.",num);
    else
        printf("%d is not divisible by 3 or 7.",num);
    return 0;
}