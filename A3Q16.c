// Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if(c>=65 && c<=90)
        printf("You have entered a uppercase character.");
    else if(c>=97 && c<=122)
        printf("You have entered a lowercase character.");
    else if(c>=48 && c<=57)
        printf("You have entered a digit.");
    else if(c>=32 && c<=47 || c>=58 && c<=64 || c>=91 && c<=96 || c>=123 && c<=127)
        printf("You have entered a special character.");
    return 0;
}