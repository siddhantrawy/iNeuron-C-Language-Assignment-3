// Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

#include<stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter third number: ");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3)
        printf("%d is the greatest number.",num1);
    else if(num2>num1 && num2>num3)
        printf("%d is the greatest number.",num2);
    else if(num3>num1 && num3>num2)
        printf("%d is the greatest number.",num3);
    else if(num1==num2 || num2==num3 || num3==num1)
        printf("Greatest numbers are appear two/three times");
    return 0;
}