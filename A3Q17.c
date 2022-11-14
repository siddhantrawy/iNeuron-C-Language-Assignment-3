// Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

#include<stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter first side of a triangle: ");
    scanf("%d",&side1);
    printf("Enter second side of a triangle: ");
    scanf("%d",&side2);
    printf("Enter third side of a triangle: ");
    scanf("%d",&side3);
    if(side1+side2>side3)
        printf("It is a valid triangle.");
    else if(side2+side3>side1)
        printf("It is a valid triangle.");
    else if(side1+side3>side2)
        printf("It is a valid triangle.");
    else
        printf("It is not a valid triangle.");
    return 0;
}