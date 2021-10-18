#include <stdio.h>

struct Date
{
    int month;
    int day;
    int year;
};

int Days(struct Date date)
{
    return (date.year - 2000) * 360 + (date.month - 1) * 30 + date.day - 1;
}
int main()
{
    //declare
    struct Date date;
    //input
    printf("Type date (Month, Day, Year):");
    scanf("%d %d %d", &date.month, &date.day, &date.year);
    //output
    printf("Days: %d", Days(date));
}