#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct
{
    int month;
    int day;
    int year;
} birth;

int main()
{
    birth.month = 12;
    birth.day = 28;
    birth.year = 1987;

    printf("My birth date is %d/%d/%d\n", birth.month, birth.day, birth.year);
}
