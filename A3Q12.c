// Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>

// int main()
// {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c",&c);
//     if(c >= 'a' && c <= 'z')
//         printf("You have entered lowercase alphabet.");
//     else
//         printf("You have entered uppercase alphabet.");
//     return 0;
// }


int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if(c>=97 && c<=122)
        printf("You have entered lowercase alphabet.");
    else
        printf("You have entered uppercase alphabet.");
    return 0;
}


