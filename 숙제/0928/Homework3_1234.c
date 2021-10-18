#include <stdio.h>

struct Date
{
    int month;
    int day;
    int year;
};

int totalDay(struct Date date) // date struct의 전체 day를 반환한다.
{
    return date.year * 360 + date.month * 30 + date.day;
}

struct Date recent(struct Date first, struct Date second)
{
    if (totalDay(first) > totalDay(second)) // 전체 day를 대소를 비교한다.
        return first;
    else
        return second;
}

int main()
{
    //declare
    struct Date date[2];
    //input
    for (int i = 0; i < 2; i++)
    {
        printf("Type date (Month, Day ,Year):");
        scanf("%d %d %d", &date[i].month, &date[i].day, &date[i].year);
    }
    //output
    struct Date resultDate = recent(date[0], date[1]);
    printf("%d/%d/%d", resultDate.month, resultDate.day, resultDate.year);

    return 0;
}