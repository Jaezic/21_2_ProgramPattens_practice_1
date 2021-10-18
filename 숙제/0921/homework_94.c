#include <stdio.h>

void liquid(int, int *, int *, int *, int *);
int main()
{
    int input;
    int gallons = 0, quarts = 0, pints = 0, cups = 0;
    printf("Enter the number of cups : ");
    scanf("%d", &input);
    liquid(input, &gallons, &quarts, &pints, &cups);
    printf("\tThe number of gallons is %d\n", gallons);
    printf("\tThe number of quarts is %d\n", quarts);
    printf("\tThe number of pints is %d\n", pints);
    printf("\tThe number of cups is %d\n", cups);

    return 0;
}

void liquid(int input, int *gallons, int *quarts, int *pints, int *cups)
{
    *gallons = input / 16;
    *quarts = input % 16 / 4;
    *pints = input % 16 % 4 / 2;
    *cups = input % 16 % 4 % 2;
}