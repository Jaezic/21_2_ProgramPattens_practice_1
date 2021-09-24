#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Birth
{
    int month;
    int day;
    int year;
} birth;

int main()
{
    printf("Type current day(Day Month Year): ");
    scanf("%d %d %d", &birth.month, &birth.day, &birth.year);
    printf("My birth data is %d/%d/%d\n", birth.month, birth.day, birth.year);
}