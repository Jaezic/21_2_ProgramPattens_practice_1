#include <stdio.h>

void mille2km(int[]);
int main()
{
    // mile array
    int miles[5] = {1, 2, 3, 4, 5};

    // mile2km function
    mille2km(miles);
    return 0;
}
void mille2km(int local_array[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("\n %d mile -> %f km\n", local_array[i], local_array[i] * 1.6093);
    }
}