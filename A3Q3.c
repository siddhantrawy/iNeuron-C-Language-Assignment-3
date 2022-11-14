// Write a program to check whether a given number is an even number or an odd number.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    // if(num%2 == 0)
    //     printf("You have entered %d which is an even number.",num);
    // else
    //     printf("You have entered %d which is an odd number.",num);

    (num%2==0)?printf("You have entered %d which is an even number.",num):printf("You have entered %d which is an odd number.",num);

    return 0;
}