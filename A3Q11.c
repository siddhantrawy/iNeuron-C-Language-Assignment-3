// Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include<stdio.h>

int main()
{
    float subject_1, subject_2, subject_3, subject_4, subject_5, sum, average_percentage;
    printf("Enter first subject marks: ");
    scanf("%f",&subject_1);
    printf("Enter second subject marks: ");
    scanf("%f",&subject_2);
    printf("Enter third subject marks: ");
    scanf("%f",&subject_3);
    printf("Enter four subject marks: ");
    scanf("%f",&subject_4);
    printf("Enter five subject marks: ");
    scanf("%f",&subject_5);

    sum = subject_1+subject_2+subject_3+subject_4+subject_5;
    average_percentage=(sum/500)*100;

    if(subject_1>33 && subject_2>33 && subject_3>33 && subject_4>33 && subject_5>33 && average_percentage>33)
        printf("You are passed.");
    else
        printf("You are failed.");
    return 0;
}