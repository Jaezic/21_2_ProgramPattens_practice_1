#include <stdio.h>

void secs(int *totSec, int hours, int minutes, int seconds);
int main()
{
    int hours, minutes, seconds;
    int totSec;
    printf("Type hours, minutes, and seconds (e.g, 10 10 10): ");
    scanf("%d %d %d", &hours, &minutes, &seconds);
    secs(&totSec, hours, minutes, seconds);
    printf("Total seconds: %d\n", totSec);

    return 0;
}

void secs(int *totSec, int hours, int minutes, int seconds)
{
    *totSec = (hours * 60 * 60 + 60 * minutes + seconds);
}