#include <stdio.h>

void change(float, int *, int *, int *, int *);
int main()
{
    float input;
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    printf("TOTAL VALUE ENTERED: ");
    scanf("%f", &input);
    change(input, &quarters, &dimes, &nickels, &pennies);
    printf("\t%d quarters\n", quarters);
    printf("\t%d dimes\n", dimes);
    printf("\t%d nickels\n", nickels);
    printf("\t%d pennies\n", pennies);
    return 0;
}

void change(float input, int *quarters, int *dimes, int *nickels, int *pennies)
{
    int temp = (int)(input * 100.001); // float to int 손실되는 값으로 인해 100.001을
    *quarters = temp / 25;
    *dimes = temp % 25 / 10;
    *nickels = temp % 25 % 10 / 5;
    *pennies = temp % 25 % 10 % 5;
}