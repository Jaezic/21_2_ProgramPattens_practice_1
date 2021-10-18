#include <stdio.h>

#define LEGNTH 9
void show(float[]);
int main()
{
    float rates[LEGNTH] = {
        6.5, 8.2, 8.5, 8.3, 8.6, 9.4, 9.6, 9.8, 10.0};
    show(rates);
    return 0;
}

void show(float rates[])
{
    for (int i = 0; i < LEGNTH; i++)
    {
        printf("%.1f ", rates[i]);
    }
}