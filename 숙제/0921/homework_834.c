#include <stdio.h>

#define LENGTH 10
void extend(double[], double[], double[]);

int main()
{
    double price[LENGTH] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
    double quantity[LENGTH] = {4, 8.5, 6, 8.35, 9, 15.3, 3, 5.4, 2.9, 4.8};
    double amount[LENGTH] = {
        0,
    };
    extend(price, quantity, amount);
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%f\n", amount[i]);
    }
    return 0;
}

void extend(double price[], double quantity[], double amount[])
{
    for (int i = 0; i < LENGTH; i++)
    {
        amount[i] = price[i] * quantity[i];
    }
}