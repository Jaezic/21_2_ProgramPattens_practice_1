#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NUM 12
struct MONTH_DAYS
{
    char month_name[10];
    int days;
};

void init(struct MONTH_DAYS *arr, int size);
void print(struct MONTH_DAYS *arr, int size);

void main()
{
    struct MONTH_DAYS convert[NUM];
    init(convert, NUM);
    print(convert, NUM);
}

void init(struct MONTH_DAYS *arr, int size)
{
    for (int i = 1; i <= size; i++)
    {
        printf("%d-th Month information (Name Days):", i);
        scanf("%s %d", &arr[i].month_name, &arr[i].days);
    }
}

void print(struct MONTH_DAYS *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d-th Month: %s %d\n", i, arr[i].month_name, arr[i].days);
    }
}