#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Birth
{
    int month;
    int day;
    int year;
};

int main()
{
    struct Birth birth = {10, 20, 2021};
    printf("My birth data is %d/%d/%d\n", birth.month, birth.day, birth.year);
}