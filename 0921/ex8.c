#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NUM 5
struct Stock
{
    char name[20];
    float est_price_ratio;
    int est_earnings;
};

void main()
{
    int i = 0;
    char t_name[20];
    struct Stock sto[NUM];
    for (i = 0; i < NUM; i++)
    {
        printf("Type %d-th stock information (Name, ratio, earnings):", i);
        scanf("%s %f %d", &sto[i].name, &sto[i].est_price_ratio, &sto[i].est_earnings);
    }
    for (i = 0; i < NUM; i++)
    {
        printf("%d-th: %s stock price: %f\n", i, sto[i].name, sto[i].est_price_ratio * (float)sto[i].est_earnings);
    }
}
