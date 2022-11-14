// Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

#include<stdio.h>

int main()
{
    float cost_price, selling_price;
    printf("Enter cost price: ");
    scanf("%f",&cost_price);
    printf("Enter selling price: ");
    scanf("%f",&selling_price);
    if(selling_price > cost_price)
    {
        printf("Profit percentage is %f",((selling_price-cost_price)/cost_price)*100);
    }
    else
    {
        printf("Loss percentage is %f",((cost_price-selling_price)/cost_price)*100);
    }
    return 0;
}