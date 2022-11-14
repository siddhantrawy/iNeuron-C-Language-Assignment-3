// Write a program to print greater between two numbers. Print one number if both are the same.

#include<stdio.h>

int main()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    if(num1 > num2)
        printf("%d is greater number.",num1);
    else if(num1 == num2)
        printf("Both numbers are same and which is %d.",num1);
    else
        printf("%d is greater number.",num2);
    return 0;
}