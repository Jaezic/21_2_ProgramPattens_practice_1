#include <stdio.h>

void main()
{
    int secs(int, int, int);
    int hour = 0, minute = 0, second = 0;
    printf("Type hours, minutes, seconds : ");
    scanf("%d %d %d", &hour, &minute, &second);
    printf("Total seconds : %d\n", secs(hour, minute, second));
}

int secs(int hour, int minute, int second)
{
    return hour * 3600 + minute * 60 + second;
}