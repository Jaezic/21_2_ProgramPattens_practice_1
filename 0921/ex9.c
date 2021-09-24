#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NUM 12
struct MonthDays
{
    char name[10];
    int days;
};

void main()
{
    // init
    struct MonthDays convert[NUM + 1];

    // store
    for (int i = 1; i <= NUM; i++)
    {
        printf("Type the informaton of Month Days (Name, days):");
        scanf("%s %d", &convert[i].name, &convert[i].days);
    }

    // print
    for (int i = 1; i <= NUM; i++)
    {
        printf("%s days=%d\n", convert[i].name, convert[i].days);
    }
}