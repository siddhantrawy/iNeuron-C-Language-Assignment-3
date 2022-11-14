// Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

#include<stdio.h>

int main()
{
    int a, b, c, D;
    printf("Enter coefficients of a quadratic equation in format a, b, c: ");
    scanf("%d, %d, %d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)
        printf("The roots of a quadratic equation is real & distinct.");
    else if(D=0)
        printf("The roots of a quadratic equation is real & equal.");
    else
        printf("The roots of a quadratic equation is imaginary");
    return 0;
}