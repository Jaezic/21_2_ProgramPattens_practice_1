#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NUM 5
struct Stock
{
    char name[20];
    float stock_earning;
    float price_to_ratio;
};

void main()
{
    // variable
    struct Stock sto[NUM];
    // input
    for (int i = 0; i < NUM; i++)
    {
        printf("Type stock information (Name, earning, ratio):");
        scanf("%s %f %f", &sto[i].name, &sto[i].stock_earning, &sto[i].price_to_ratio);
    }

    // print
    for (int i = 0; i < NUM; i++)
    {
        printf("Stock name:%s stock price:%f\n", sto[i].name, sto[i].stock_earning * sto[i].price_to_ratio);
    }
}